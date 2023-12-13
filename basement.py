def basement(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_far < 0:
            return i
    return -1

nums = input().split()
nums = [int(num) for num in nums]

result = basement(nums)
print(result)