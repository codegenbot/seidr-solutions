from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    nums = []
    for num in numbers:
        if num not in nums:
            nums.append(num)
    return nums

input_list = []
while True:
    try:
        line = int(input())
        input_list.append(line)
    except ValueError:
        break

result = remove_duplicates(input_list)
print(*result)