n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
for i, num in enumerate(nums):
    current_sum += num
    if current_sum >= half_sum:
        if current_sum == half_sum or abs(total_sum - 2 * current_sum) < abs(
            total_sum - 2 * (current_sum - num)
        ):
            subvector1 = nums[: i + 1]
            subvector2 = nums[i + 1 :]
            break

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")