from typing import List, Tuple
def func(n: int, nums: List[int]) -> List[int]:
    updated_nums = []
    for i in range(n):
        if nums[i] % 2 == 0:
            updated_nums.append(nums[i])
    return updated_nums

n = int(input())
nums = list(map(int, input().split()))
print(func(n, nums))