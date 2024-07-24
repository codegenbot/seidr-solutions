n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
prefix_sum = 0
min_diff = float("inf")
cut_idx = -1

for i, num in enumerate(arr):
    prefix_sum += num
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*arr[: cut_idx + 1])
print(*arr[cut_idx + 1 :])