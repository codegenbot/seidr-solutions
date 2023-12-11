nums = []
for _ in range(2):
    nums.append(int(input()))

n = len(nums)
total_sum = sum(nums)
left_sum = 0
right_sum = total_sum

min_diff = sys.maxsize
cut_position = -1

for i in range(n-1):
    left_sum += nums[i]
    right_sum -= nums[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_position = i+1

print(*nums[:cut_position])
print(*nums[cut_position:])