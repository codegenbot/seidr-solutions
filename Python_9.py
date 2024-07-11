from typing import List


def rolling_max() -> List[int]:
    while True:
        try:
            numbers = list(map(int, input("Enter numbers separated by space: ").split()))
            if len(numbers) > 0:
                result = [max(numbers[: i + 1]) for i in range(len(numbers))]
                return result
            else:
                print("Please enter at least one number.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")