from typing import List
import math


def main():
    while True:
        try:
            n1 = int(input("Enter the first integer: "))
            if n1 < 1:
                print("Please enter a positive integer.")
                for _ in range(2):
                    try:
                        n1 = int(input("Enter the first integer: "))
                        if n1 < 1:
                            print("Please enter a positive integer.")
                        else:
                            break
                    except ValueError:
                        print("Invalid input. Please enter a valid integer.")
                else:
                    continue
            break
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    factors1 = []
    i = 2
    while i * i <= n1:
        if n1 % i:
            i += 1
        else:
            n1 //= i
            count = 0
            while n1 % i == 0:
                n1 //= i
                count += 1
            factors1.extend([i] * count)
    if n1 > 1:
        factors1.append(n1)

    numbers = [n1]
    for _ in range(2):
        while True:
            try:
                n = int(input(f"Enter another integer ({len(numbers) + 1}/3): "))
                break
            except ValueError:
                print("Invalid input. Please enter a valid integer.")
        if n < 1:
            print("Please enter a positive integer.")
            for _ in range(2):
                try:
                    n = int(input(f"Enter another integer ({len(numbers) + 1}/3): "))
                    if n < 1:
                        print("Please enter a positive integer.")
                    else:
                        break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
            else:
                continue
        numbers.append(n)

    common_factors = []
    i = 2
    while i * i <= min(numbers):
        if all(num % i == 0 for num in numbers):
            count = 0
            while True:
                n1 //= i
                n2 //= i
                n3 //= i
                if n1 > 1 and n2 > 1 and n3 > 1:
                    break
                count += 1
            common_factors.extend([i] * count)
        elif any(num % i for num in numbers):
            i += 1
        else:
            break

    if numbers[0] > 1 and not (
        numbers[1] % numbers[0] == 0 or numbers[2] % numbers[0] == 0
    ):
        common_factors.append(numbers[0])
    if numbers[1] > 1 and not (
        numbers[0] % numbers[1] == 0 or numbers[2] % numbers[1] == 0
    ):
        common_factors.append(numbers[1])
    if numbers[2] > 1 and not (
        numbers[0] % numbers[2] == 0 or numbers[1] % numbers[2] == 0
    ):
        common_factors.append(numbers[2])

    if common_factors:
        print(
            f"{', '.join(map(str, set(common_factors)))} are the common factors between {numbers}."
        )
    else:
        print(f"No common factor found between {numbers}.")


if __name__ == "__main__":
    main()