def basement(nums):
    total = 0
    min_total = 0
    min_index = 0
    for i in range(len(nums)):
        total += nums[i]
        if total <= min_total:
            min_total = total
            min_index = i
    if min_index is None:
        return -1
    return min_index

nums = list(map(int, input().split()))
result = basement(nums)
print(result)