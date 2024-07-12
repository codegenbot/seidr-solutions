from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

user_input = []
while True:
    try:
        line = input()
        if line:
            user_input.append(int(line))
        else:
            break
    except EOFError:
        break

print(rolling_max(user_input))