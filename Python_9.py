from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    result = []
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_str = input("Enter a list of numbers separated by space: ")
numbers = list(map(int, input_str.split()))
print(rolling_max(numbers))