from typing import List

def find_pair(nums: List[int], target: int) -> List[int]:
    seen = set()
    for num in nums:
        complement = target - num
        if complement in seen:
            return [complement, num]
        seen.add(num)
        
n = int(input())
nums = list(map(int, input().split()))
target = int(input())

pair = find_pair(nums, target)
print(pair[0])
print(pair[1])