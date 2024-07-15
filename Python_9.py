from typing import List, Tuple

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    current_max = float("-inf")
    for num in numbers:
        current_max = max(current_max, num)
        max_numbers.append(current_max)
    return max_numbers

user_input = input("Enter numbers separated by space: ")
numbers = list(map(int, user_input.split()))
output = rolling_max(numbers)
print(output)