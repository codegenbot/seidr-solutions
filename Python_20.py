from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

if __name__ == "__main__":
    try:
        numbers = list(map(float, input().split()))
        closest_pair = find_closest_elements(numbers)
        print(closest_pair[0], closest_pair[1])
    except ValueError:
        print("Please provide numbers separated by spaces.")