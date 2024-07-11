arr = [3, 1, 2, 4, 3]
min_diff = float('inf')
cut_position = 0

for i in range(1, len(arr)):
    total_sum = sum(arr)
    current_diff = abs(2 * sum(arr[:i]) - total_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(subvector1)
print(subvector2)