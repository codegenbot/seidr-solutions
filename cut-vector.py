n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2

prefix_sums = [0]
for num in nums:
    prefix_sums.append(prefix_sums[-1] + num)

best_diff = float("inf")
best_cut = 0

for i in range(1, n):
    diff = abs(prefix_sums[i] - (total_sum - prefix_sums[i]))
    if diff < best_diff:
        best_diff = diff
        best_cut = i

print(*nums[:best_cut])
print(*nums[best_cut:])