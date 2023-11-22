from typing import List

def find_max_product(n: int, nums: List[int]) -> int:
    max_product = float('-inf')
    for i in range(n-1):
        for j in range(i+1, n):
            product = nums[i] * nums[j]
            if product > max_product:
                max_product = product
    return max_product

n = int(input())
nums = list(map(int, input().split()))

result = find_max_product(n, nums)
print(result)