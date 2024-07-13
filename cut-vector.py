n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
min_diff = float("inf")
split_index = 0
running_sum = 0

for i in range(n):
    running_sum += arr[i]
    diff = abs(total_sum - 2 * running_sum)
    if diff < min_diff:
        min_diff = diff
        split_index = i

subvector1 = arr[: split_index + 1]
subvector2 = arr[split_index + 1 :]

print(*subvector1)
print(*subvector2)