n = int(input())
nums = [int(input()) for _ in range(n)]

if n == 1:
    print(nums[0])
    print(0)
else:
    total_sum = sum(nums)
    half_sum = total_sum // 2
    current_sum = 0
    for i, num in enumerate(nums):
        current_sum += num
        if current_sum >= half_sum:
            if current_sum == half_sum or current_sum - half_sum < half_sum - (
                current_sum - num
            ):
                print(*nums[: i + 1])
                print(*nums[i + 1 :])
                break