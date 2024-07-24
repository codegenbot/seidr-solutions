n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
cut_index = 0

for i, num in enumerate(nums):
    current_sum += num
    if current_sum >= half_sum:
        cut_index = i
        break

if abs(2 * current_sum - total_sum) < abs(2 * current_sum - 2 * num - total_sum):
    cut_index -= 1

print(nums[: cut_index + 1])
print(nums[cut_index + 1 :])