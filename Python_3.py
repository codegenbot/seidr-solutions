from typing import List

def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False

nums = list(map(int, input().split()))

result = below_zero(nums)

print(result)