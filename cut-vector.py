n = int(input())
nums = []
for i in range(n):
    nums.append(int(input()))

total_sum = sum(nums)
left_sum = 0
right_sum = total_sum
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += nums[i]
    right_sum -= nums[i]
    current_diff = abs(left_sum - right_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_index = i

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)