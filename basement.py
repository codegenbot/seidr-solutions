def basement(nums):
    total = 0
    min_total = float('inf')
    min_index = None
    for i in range(len(nums)):
        total += nums[i]
        if total < min_total:
            min_total = total
            min_index = i
        if total < 0:
            return min_index
    return None

nums = list(map(int, input().split()))
result = basement(nums)
print(result)