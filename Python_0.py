from typing import List


def has_close_elements():
    numbers = input("Enter space-separated floating point numbers: ")
    threshold = float(input("Enter a threshold value: "))

    try:
        nums = list(map(float, numbers.split()))
        return any(abs(a - b) <= threshold for a, b in zip(nums, nums[1:]))
    except ValueError:
        print("Invalid input. Please enter valid floating point numbers.")
        return False