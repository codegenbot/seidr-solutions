n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)
half_sum = total_sum // 2
current_sum = 0
idx = -1

for i in range(n):
    current_sum += nums[i]
    if current_sum == half_sum:
        idx = i
        break

print(*nums[:idx + 1])
print(*nums[idx + 1:])