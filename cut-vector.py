nums = list(map(int, input().split()))
cut_index = 0
min_diff = float("inf")

for i in range(1, len(nums)):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

subvector1 = nums[:cut_index]
subvector2 = nums[cut_index:]

print(*subvector1)
print(*subvector2)