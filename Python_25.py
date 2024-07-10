from typing import List
import math


def main():
    n1 = int(input("Enter the first integer: "))
    n2 = int(input("Enter another integer: "))
    n3 = int(input("Enter another integer: "))
    n4 = int(input("Enter another integer: "))

    factors1 = []
    i = 2
    while i * i <= n1:
        if n1 % i:
            i += 1
        else:
            count = 0
            while n1 > 1 and n1 % i == 0:
                n1 //= i
                count += 1
            factors1.extend([i] * count)
    if n1 > 1:
        factors1.append(n1)

    common_factors = []
    i = 2
    while i * i <= min(n1, n2, n3, n4):
        if all(num % i == 0 for num in (n1, n2, n3, n4)):
            count = 0
            while all(num > 1 and num % i == 0 for num in (n1, n2, n3, n4)):
                n1 //= i
                n2 //= i
                n3 //= i
                n4 //= i
                count += 1
            common_factors.extend([i] * count)
        elif any(num % i for num in (n1, n2, n3, n4)):
            i += 1
        else:
            break

    if any(
        num > 1 and not any(other_num % num == 0 for other_num in (n2, n3, n4))
        for num in (n1, n2, n3, n4)
    ):
        common_factors.append(
            next(
                num
                for num in (n1, n2, n3, n4)
                if num > 1
                and not any(other_num % num == 0 for other_num in (n2, n3, n4))
            )
        )
    if any(
        num > 1 and not any(other_num % num == 0 for other_num in (n1, n3, n4))
        for num in (n2,)
    ):
        common_factors.append(
            next(
                num
                for num in (n2,)
                if num > 1
                and not any(other_num % num == 0 for other_num in (n1, n3, n4))
            )
        )
    if any(
        num > 1 and not any(other_num % num == 0 for other_num in (n1, n2, n4))
        for num in (n3,)
    ):
        common_factors.append(
            next(
                num
                for num in (n3,)
                if num > 1
                and not any(other_num % num == 0 for other_num in (n1, n2, n4))
            )
        )
    if any(
        num > 1 and not any(other_num % num == 0 for other_num in (n1, n2, n3))
        for num in (n4,)
    ):
        common_factors.append(
            next(
                num
                for num in (n4,)
                if num > 1
                and not any(other_num % num == 0 for other_num in (n1, n2, n3))
            )
        )

    if common_factors:
        print(
            f"{', '.join(map(str, set(common_factors)))} are the common factors between {n1}, {n2}, {n3} and {n4}."
        )
    else:
        print(f"No common factor found between {n1}, {n2}, {n3} and {n4}.")


if __name__ == "__main__":
    main()