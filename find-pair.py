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

pair = find_pair(nums, target)
if pair:
    print(pair[0])
    print(pair[1])