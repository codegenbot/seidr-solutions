n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2

prefix_sum = 0
for i, num in enumerate(nums):
    prefix_sum += num
    if prefix_sum >= half_sum:
        if prefix_sum == half_sum or abs(prefix_sum - half_sum) < abs(
            prefix_sum - num - half_sum
        ):
            print(*nums[: i + 1])
            print(*nums[i + 1 :])
        else:
            print(*nums[:i])
            print(*nums[i:])
        break
else:
    print(*nums)
    print(0)