def basement(nums):
    prefix_sum = 0
    for i in range(len(nums)):
        prefix_sum += nums[i]
        if prefix_sum < 0:
            return i
    return -1


n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = basement(nums)
print(result)