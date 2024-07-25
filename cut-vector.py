n = int(input())

nums = []
for i in range(n):
    nums.append(int(input()))

min_diff = float("inf")
cut_index = None
for i in range(1, n):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*nums[:cut_index])
print(*nums[cut_index:])