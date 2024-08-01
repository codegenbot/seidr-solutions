n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2
running_sum = 0
for i, num in enumerate(nums):
    running_sum += num
    if running_sum >= half_sum:
        if running_sum == half_sum or abs(running_sum - half_sum) < abs(
            running_sum - num - half_sum
        ):
            print(*nums[: i + 1])
            print(*nums[i + 1 :])
            break