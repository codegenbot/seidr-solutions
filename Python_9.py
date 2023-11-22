from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for number in numbers:
        current_max = max(current_max, number)
        max_numbers.append(current_max)
    return max_numbers


if __name__ == "__main__":
    numbers = input().split()
    numbers = [int(num) for num in numbers]
    result = rolling_max(numbers)
    print(" ".join(str(num) for num in result))