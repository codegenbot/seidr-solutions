arr = list(map(int, input().split()))

total_sum = sum(arr)
prefix_sum = 0
min_diff = float("inf")
cut_index = 0

for i in range(len(arr)):
    prefix_sum += arr[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)