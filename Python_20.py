# Task: Calculate sum of numbers entered by the user.
# Signature: def calculate_sum(numbers: List[int]) -> int
try:
    numbers = [
        int(x) for x in input("Enter numbers separated by commas: ").strip().split(",")
    ]
    total_sum = sum(numbers)
    print("Sum of the numbers:", total_sum)
except ValueError:
    print("Input error. Please enter numbers separated by commas.")