def find_negative_sum_index(nums):
    total_sum = 0
    for i in range(len(nums)):
        total_sum += nums[i]
        if total_sum < 0:
            return i
    return -1

n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_negative_sum_index(nums)
print(result)