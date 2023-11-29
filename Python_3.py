from typing import List

def below_zero(nums: List[int]) -> bool:
    balance = 0
    for num in nums:
        balance += num
        if balance < 0:
            return True
    return False

def main(n: int, nums: List[int]):
    result = below_zero(nums)
    print(result)

if __name__ == "__main__":
    n = 5  # example value, replace with the actual number of elements
    nums = [1, -2, 3, -4, 5]  # example values, replace with the actual list of elements
    main(n, nums)