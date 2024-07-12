n = int(input())
nums = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = 0

for i in range(1, n):
    curr_diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if curr_diff < diff:
        diff = curr_diff
        cut_index = i

print(*nums[:cut_index])
print(*nums[cut_index:])