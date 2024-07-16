from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

input_numbers = []
while True:
    try:
        num = int(input())
        input_numbers.append(num)
    except EOFError:
        break

result = rolling_max(input_numbers)
print(result)