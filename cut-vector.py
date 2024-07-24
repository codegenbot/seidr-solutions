n = int(input())
nums = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = 0
for i in range(1, n):
    current_diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_idx = i

print(*nums[:cut_idx])
print(*nums[cut_idx:])