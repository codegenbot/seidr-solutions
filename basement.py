def find_negative_sum_index(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i
    return None


n = int(input())
nums = []
for _ in range(n):
    nums.append(int(input()))

result = find_negative_sum_index(nums)
print(result)