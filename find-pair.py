from typing import List

def find_pair(nums: List[int], target: int) -> List[int]:
    seen = {}
    for num in nums:
        complement = target - num
        if complement in seen:
            return [complement, num]
        seen[num] = True
    return []
  
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

result = find_pair(nums, target)
for num in result:
    print(num)