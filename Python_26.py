from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    if not numbers or any(num < 0 for num in numbers):
        return []
    return list(set(numbers))


input_list = []
while True:
    input_str = input().strip()
    if input_str == '':
        break
    input_list.append(int(input_str))

result = remove_duplicates(input_list)
print(*result)