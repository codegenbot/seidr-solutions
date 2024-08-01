from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result


input_numbers = input("Enter a list of integers separated by spaces: ")
numbers = list(map(int, input_numbers.split()))
output = rolling_max(numbers)
print(output)