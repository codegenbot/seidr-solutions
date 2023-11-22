def find_negative_sum_index(nums):
    sum = 0
    for i in range(len(nums)):
        sum += nums[i]
        if sum < 0:
            return i
    return -1


# Read input from user
n = int(input())
nums = list(map(int, input().split()))

# Call the function and print the result
print(find_negative_sum_index(nums))