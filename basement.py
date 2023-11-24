def find_negative_index(nums):
    cum_sum = 0
    for i in range(len(nums)):
        cum_sum += nums[i]
        if cum_sum < 0:
            return i
    return -1


# Read input from user
n = int(input())
nums = list(map(int, input().split()))

# Call the function and print the result
result = find_negative_index(nums)
print(result)