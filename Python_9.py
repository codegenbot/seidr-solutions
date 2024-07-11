```
from typing import List


def rolling_max():
    result = []
    T = int(input("Enter number of test cases: "))
    
    for _ in range(T):
        while True:
            try:
                numbers = list(map(int, input(f"Enter {len(result) + 1} numbers separated by space: ").split()))
                if not numbers:
                    return result
                temp_result = [max(numbers[: i + 1]) for i in range(len(numbers))]
                result.extend(temp_result)
                break
            except ValueError:
                print("Invalid input. Please enter a number.")
    return result