from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = [max(numbers[: i + 1]) for i in range(len(numbers))]
    return result


if __name__ == "__main__":
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    print(rolling_max(numbers))