n = int(input())
nums = list(map(int, input().split()))

total_sum = sum(nums)

cut_index = min(range(n - 1), key=lambda i: abs(sum(nums[:i+1]) - sum(nums[i+1:]))

subvector1 = nums[: cut_index + 1]
subvector2 = nums[cut_index + 1 :]

print(*subvector1)
print(*subvector2)