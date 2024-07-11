n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = total_sum
result_idx = -1

for idx, num in enumerate(arr):
    prefix_sum += num
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        result_idx = idx

print(*arr[: result_idx + 1], sep="\n")
print(*arr[result_idx + 1 :], sep="\n")