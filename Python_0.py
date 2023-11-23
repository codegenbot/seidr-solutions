from typing import List


def solve(n: int, nums: List[int]) -> int:
    # Implement your logic here
    return sum(nums)


n = int(input())
nums = list(map(int, input().split()))

result = solve(n, nums)
print(result)