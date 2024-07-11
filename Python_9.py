from typing import List


def rolling_max():
    while True:
        try:
            numbers = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter space-separated integers.")
    
    if not numbers:
        return []
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result