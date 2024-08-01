from typing import List

def below_zero(nums: List[int]) -> bool:
    balance = 0
    for operation in nums:
        balance += operation
        if balance < 0:
            return True
    return False