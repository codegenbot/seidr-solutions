```
from typing import List


def has_close_elements():
    numbers = input("Enter space-separated floating point numbers: ")
    threshold = float(input("Enter a threshold value: "))

    try:
        nums = list(map(float, numbers.split()))

        if len(nums) < 2:
            print("At least two numbers are required to check for close elements.")
            return False

        result = any(abs(a - b) <= threshold for a, b in zip(nums, nums[1:]))
        if result:
            print(f"Close elements found with a distance of {threshold}.")
        else:
            print("No close elements found.")
        return result
    except ValueError:
        print("Invalid input. Please enter valid floating point numbers.")
        return False