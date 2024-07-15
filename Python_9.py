from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

numbers = []
while True:
    try:
        number = int(input())
        numbers.append(number)
    except:
        break

result = rolling_max(numbers)
print(result)