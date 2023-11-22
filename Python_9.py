from typing import List

def find_max(n: int, nums: List[int]) -> int:
    return max(nums)

n = int(input())
nums = list(map(int, input().split()))

result = find_max(n, nums)
print(result)