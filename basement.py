def basement(nums):
    cumulative_sum = 0
    for i in range(len(nums)):
        cumulative_sum += nums[i]
        if cumulative_sum < 0:
            return i
    return -1


nums = list(map(int, input().split()))
result = basement(nums)
print(result)