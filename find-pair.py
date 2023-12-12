from typing import List

def find_pair(nums: List[int], target: int) -> List[int]:
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return [complement, num]
        complements[num] = True
    return []

# Read input from user
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

# Call the function and print the result
result = find_pair(nums, target)
for num in result:
    print(num)