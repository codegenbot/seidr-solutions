from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    nums = []
    for num in numbers:
        if num not in nums:
            nums.append(num)
    return nums

line = input().split()
input_list = list(map(int, line))

result = remove_duplicates(input_list)
print(*result, sep=',')