def find_pair(target, nums):
    seen = {}
    for num in nums:
        complement = target - num
        if complement in seen:
            return f"{num} {complement}"
        seen[num] = True
    return "No pair found"

target = int(input())
print(find_pair(target, [int(x) for x in input().split()]))