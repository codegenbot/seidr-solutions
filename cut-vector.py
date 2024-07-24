n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
cumulative_sum = 0
min_diff = float("inf")
cut_index = 0

for i in range(n-1):
    cumulative_sum += arr[i]
    current_diff = abs(cumulative_sum - half_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_index = i

subvector1 = arr[: cut_index + 1]
subvector2 = arr[cut_index + 1 :]

print(*subvector1)
print(*subvector2)