from typing import List

def sum_of_elements(n: int, nums: List[int]) -> int:
    return sum(nums)

n = int(input())
nums = list(map(int, input().split()))

result = sum_of_elements(n, nums)
print(result)