def basement(nums):
    curr_sum = 0
    for i, num in enumerate(nums):
        curr_sum += num
        if curr_sum < 0:
            return i
    return -1

nums = list(map(int, input().split()))
result = basement(nums)
print(result)