def basement(nums):
    total = 0
    min_total = 0
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total < min_total:
            min_total = total
            min_index = i
    return min_index if min_index is not None else -1

nums = list(map(int, input().split()))
result = basement(nums)
print(result)