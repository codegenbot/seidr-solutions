arr = list(map(int, input().split()))
n = len(arr)
total_sum = sum(arr)
prefix_sum = 0
cut_position = 0
min_diff = total_sum

for i in range(n - 1):
    prefix_sum += arr[i]
    next_prefix_sum = total_sum - prefix_sum
    diff = abs(prefix_sum - next_prefix_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_position = i

subvector1 = arr[:cut_position + 1]
subvector2 = arr[cut_position + 1:]

print(*subvector1)
print(*subvector2)