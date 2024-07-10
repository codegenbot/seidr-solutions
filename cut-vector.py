n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
half_sum = total_sum // 2
curr_sum = 0
for i, num in enumerate(nums):
    curr_sum += num
    if curr_sum >= half_sum:
        if curr_sum == half_sum or abs(curr_sum - half_sum) < abs(
            curr_sum - num - half_sum
        ):
            print(*nums[: i + 1])
            print(*nums[i + 1 :])
            break