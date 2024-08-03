n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
left_sum = 0
cut_index = -1
for i, num in enumerate(nums):
    left_sum += num
    right_sum = total_sum - left_sum
    if abs(left_sum - right_sum) <= 1:
        cut_index = i
        break

print(*nums[: cut_index + 1])
print(*nums[cut_index + 1 :])