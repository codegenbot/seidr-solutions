nums = list(map(int, input().split()))
total_sum = sum(nums)
n = len(nums)
target_sum = 0
cut_index = -1

for i in range(n):
    target_sum += nums[i]
    if target_sum * 2 >= total_sum:
        cut_index = i
        break

subvector1 = nums[:cut_index + 1]
subvector2 = nums[cut_index + 1:]

print(*subvector1)
print(*subvector2)