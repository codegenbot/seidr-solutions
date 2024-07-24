n = int(input())
nums = [int(input()) for _ in range(n)]

total_sum = sum(nums)
left_sum = 0
right_sum = total_sum

for i in range(n):
    left_sum += nums[i]
    right_sum -= nums[i]
    if left_sum >= right_sum:
        break

left_subvector = nums[: i + 1]
right_subvector = nums[i + 1 :]

print(*left_subvector)
print(*right_subvector)