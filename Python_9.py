from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_numbers = []
try:
    while True:
        line = input()
        if line:
            input_numbers.append(int(line))
        else:
            break
except EOFError:
    pass

output = rolling_max(input_numbers)
print(*output)