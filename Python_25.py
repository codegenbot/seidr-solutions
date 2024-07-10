from typing import List
import math


def main():
    n1 = None
    while not n1:
        try:
            n1 = int(input("Enter the first integer: "))
            if n1 < 1:
                print("Please enter a positive integer.")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

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

    nums = [n1]
    for _ in range(3):
        num = None
        while not num:
            try:
                num = int(input(f"Enter another integer ({len(nums) + 1}): "))
                if num < 1:
                    print("Please enter a positive integer.")
            except ValueError:
                print("Invalid input. Please enter a valid integer.")
        nums.append(num)

    common_factors = []
    i = 2
    while i * i <= min(nums):
        for n in nums:
            if n % i:
                break
        else:
            count = 0
            while all(n > 1 and n % i == 0 for n in nums):
                for n in nums:
                    n //= i
                count += 1
            common_factors.extend([i] * count)
        i += 1

    if common_factors:
        print(
            f"{', '.join(map(str, set(common_factors)))} are the common factors between {' and '.join(map(str, nums))}."
        )
    else:
        print(f"No common factor found between {' and '.join(map(str, nums))}.")


if __name__ == "__main__":
    main()