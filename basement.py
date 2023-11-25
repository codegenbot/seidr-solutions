def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i
    return -1


n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = basement(nums)
print(result)