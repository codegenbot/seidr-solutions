def basement(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_fa 

nums = list(map(int, input().split()))

result = basement(nums)
print(result)