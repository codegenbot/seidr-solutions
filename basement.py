def find_first_negative_index(nums):
    sum_so_far = 0
    for i in range(len(nums)):
        sum_so_far += nums[i]
        if sum_so_far < 0:
            return i
    return -1

n = int(input())
nums = [int(input()) for _ in range(n)]

result = find_first_negative_index(nums)
print(result)