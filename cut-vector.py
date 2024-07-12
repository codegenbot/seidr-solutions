arr = list(map(int, input().split()))
n = len(arr)
total_sum = sum(arr)
prefix_sum = 0
min_diff = float("inf")
cut_position = -1

for i in range(1, n):
    prefix_sum += arr[i-1]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(*subvector1)
print(*subvector2)