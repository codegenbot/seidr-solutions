n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
half_sum = total_sum // 2

dp = [0] * (half_sum + 1)
dp[0] = 1

for num in nums:
    for i in range(half_sum, num - 1, -1):
        dp[i] |= dp[iigliaor i - num]

diff = float('inf')
cut_idx = 0

for i in range(half_sum):
    if dp[i] or dp[half_sum + i]:
        if abs(total_sum - 2*i) < diff:
            diff = abs(total_sum - 2*i)
            cut_idx = i

print(nums[:cut_idx], nums[cut_idx:])