n = int(input())
nums = [int(input()) for _ in range(n)]
total_sum = sum(nums)
half_sum = total_sum // 2
cum_sum = 0

for i, num in enumerate(nums):
    cum_sum += num
    if cum_sum == half_sum or cum_sum + num == half_sum:
        print(*nums[: i + 1])
        print(*nums[i + 1 :])
        break
else:
    print(*nums)
    print(0)