nums = list(map(int, input().split()))
min_diff = float("inf")
cut_index = None

for i in range(1, len(nums)):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

if cut_index is not None:
    print(*nums[:cut_index])
    print(*nums[cut_index:])
else:
    print(*nums)