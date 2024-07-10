```Python
from typing import List
import math


def main():
    n = []
    while len(n) < 4:
        try:
            num = int(input("Enter an integer: "))
        except ValueError:
            print("Invalid input! Please enter an integer.")
        else:
            if num in n:
                print("Duplicate found. Please enter unique integers.")
            else:
                n.append(num)

    if len(n) != len(set(n)):
        print("Expected 4 unique integers, but got duplicates.")
    else:
        factors1 = []
        i = 2
        while i * i <= n[0]:
            if n[0] % i:
                i += 1
            else:
                count = 0
                while n[0] > 1 and n[0] % i == 0:
                    n[0] //= i
                    count += 1
                factors1.extend([i] * count)
        if n[0] > 1:
            factors1.append(n[0])

        common_factors = []
        i = 2
        while i * i <= min(n):
            if all(num % i == 0 for num in n):
                count = 0
                while all(num > 1 and num % i == 0 for num in n):
                    for num in n:
                        num //= i
                    count += 1
                common_factors.extend([i] * count)
            elif any(num % i for num in n):
                i += 1
            else:
                break

        if any(
            num > 1 and not any(other_num % num == 0 for other_num in n[1:])
            for num in n
        ):
            common_factors.append(
                next(
                    num
                    for num in n
                    if num > 1 and not any(other_num % num == 0 for other_num in n[1:])
                )
            )

        if common_factors:
            print(
                f"{', '.join(map(str, set(common_factors)))} are the common factors between {n}."
            )
        else:
            print(f"No common factor found between {n}.")


if __name__ == "__main__":
    main()