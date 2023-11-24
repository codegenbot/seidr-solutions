def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i
    return -1

nums = list(map(int, input().split()))
result = basement(nums)
print(result)