n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
left_sum = 0
right_sum = total_sum

min_diff = total_sum
cut_index = 0

for i in range(n-1):
    left_sum += nums[i]
    right_sum -= nums[i]
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

cut_index += 1

subvector1 = nums[: cut_index]
subvector2 = nums[cut_index:]

print(*subvector1)
print(*subvector2)