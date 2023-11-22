from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    for i in range(len(numbers)):
        max_numbers.append(max(numbers[: i + 1]))
    return max_numbers


user_input = input("Enter a list of numbers, separated by spaces: ")
numbers = list(map(int, user_input.split()))

result = rolling_max(numbers)
print(result)