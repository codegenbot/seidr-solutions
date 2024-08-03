n = int(input())
nums = [int(input()) for _ in range(n)]

min_diff = float("inf")
cut_index = 0
for i in range(1, n):
    left_sum = sum(nums[:i])
    right_sum = sum(nums[i:])
    if abs(left_sum - right_sum) < min_diff:
        min_diff = abs(left_sum - right_sum)
        cut_index = i

left_subvector = nums[:cut_index]
right_subvector = nums[cut_index:]

print(*left_subvector)
print(*right_subvector)