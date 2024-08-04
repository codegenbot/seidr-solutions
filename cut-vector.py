n = int(input())
nums = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = 0

for i in range(1, n):
    left_sum = sum(nums[:i])
    right_sum = sum(nums[i:])
    current_diff = abs(left_sum - right_sum)

    if current_diff < diff:
        diff = current_diff
        cut_idx = i

print(*nums[:cut_idx])
print(*nums[cut_idx:])