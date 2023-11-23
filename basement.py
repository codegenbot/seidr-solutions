def basement(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_far < 0:
            return i
    return -1


# Read input from user
nums = list(map(int, input().split()))

# Call the basement function and print the result
result = basement(nums)
print(result)