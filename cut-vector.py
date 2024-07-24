n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
left_sum = 0
for i in range(n):
    left_sum += nums[i]
    right_sum = total_sum - left_sum
    if left_sum == right_sum or abs(left_sum - right_sum) < abs(
        left_sum - right_sum - nums[i]
    ):
        print(*nums[: i + 1])
        print(*nums[i + 1 :])
        break