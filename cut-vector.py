nums = list(map(int, input().split()))
cut_index = -1
min_diff = float("inf")
for i in range(1, len(nums)):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff < min_diff:
        cut_index = i
        min_diff = diff

if cut_index != -1:
    subvector1 = nums[:cut_index]
    subvector2 = nums[cut_index:]
    print(*subvector1)
    print(*subvector2)
else:
    print(*nums)