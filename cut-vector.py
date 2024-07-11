nums = list(map(int, input().split()))

total_sum = sum(nums)
left_sum = 0
cut_index = -1
min_diff = total_sum

for i, num in enumerate(nums):
    left_sum += num
    right_sum = total_sum - left_sum
    current_diff = abs(left_sum - right_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_index = i

if cut_index != -1:
    subvector1 = nums[: cut_index + 1]
    subvector2 = nums[cut_index + 1 :]
    print(*subvector1)
    print(*subvector2)
else:
    print(*nums)