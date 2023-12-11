```
nums = []

for line in sys.stdin:
    nums.append(int(line))

n = len(nums)
min_diff = float('inf')
cut_idx = -1

for i in range(1, n):
    diff = abs(sum(nums[:i]) - sum(nums[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

output1 = nums[:cut_idx]
output2 = nums[cut_idx:]

print(*output1)
print(*output2)
```