from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_list = []
while True:
    line = input()
    if line == '':
        break
    input_list.append(int(line))

result = remove_duplicates(input_list)
print(*result)