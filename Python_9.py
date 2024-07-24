from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

input_numbers = []
while True:
    try:
        line = input()
        if not line:
            break
        input_numbers.append(int(line))
    except EOFError:
        break

output = rolling_max(input_numbers)
print(*output)