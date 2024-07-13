n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
prefix_sum = 0
min_diff = float("inf")
result_index = -1

for i in range(n):
    prefix_sum += arr[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        result_index = i

subvector1 = arr[: result_index + 1]
subvector2 = arr[result_index + 1 :]

print(*subvector1)
print(*subvector2)