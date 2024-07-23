n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
min_diff = abs(total_sum)
idx = 0

for i in range(n):
    diff1 = abs(total_sum - 2 * current_sum)
    diff2 = abs(total_sum - 2 * (current_sum + nums[i]))

    if current_sum == half_sum or current_sum > half_sum or diff2 < diff1:
        if diff2 < min_diff:
            idx = i
            min_diff = diff2
    else:
        if diff1 < min_diff:
            idx = i
            min_diff = diff1

    current_sum += nums[i]

print(*nums[: idx + 1])
print(*nums[idx + 1 :])