n = int(input())
nums = [int(input()) for _ in range(n)]

diff = float("inf")
cut_point = 0

for i in range(1, n):
    new_diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if new_diff < diff:
        diff = new_diff
        cut_point = i

print(*nums[:cut_point])
print(*nums[cut_point:])