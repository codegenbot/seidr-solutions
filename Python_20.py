from typing import List, Tuple
import sys

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    if len(numbers) < 2:
        return (0.0, 0.0)

    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0.0, 0.0)

    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair

if __name__ == "__main__":
    try:
        nums = list(map(float, sys.stdin.read().strip().split()))
        if len(nums) < 2:
            print("Please enter at least two numbers.")
        else:
            result = find_closest_elements(nums)
            print(result)
    except ValueError:
        print("Invalid input. Please enter valid numbers separated by spaces.")