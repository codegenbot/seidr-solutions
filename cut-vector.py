arr = list(map(int, input().split()))
n = len(arr)
total_sum = sum(arr)
prefix_sum = 0
min_diff = float("inf")
cut_point = 0

for i in range(n):
    prefix_sum += arr[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_point = i

subvector1 = arr[:cut_point + 1]
subvector2 = arr[cut_point + 1:]

print(*subvector1)
print(*subvector2)