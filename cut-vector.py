n = int(input())
nums = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum = sum(nums[:i])
    right_sum = sum(nums[i:])
    current_diff = abs(left_sum - right_sum)

    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*nums[:cut_index])
print(*nums[cut_index:])