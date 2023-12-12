def find_pair(nums, target):
    seen = {}
    for num in nums:
        complement = target - num
        if complement in seen:
            return complement, num
        seen[num] = True
    return None

n = int(input())
nums = list(map(int, input().split()))
target = int(input())

result = find_pair(nums, target)
print(result[0])
print(result[1])