arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = total_sum
cut_position = len(arr) // 2

for i in range(1, len(arr)-1):
    current_diff = abs(2 * sum(arr[:i]) - total_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(*subvector1)
print(*subvector2)