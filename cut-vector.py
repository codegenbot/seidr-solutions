arr = [3, 1, 2, 4, 3]
total_sum = sum(arr)
min_diff = total_sum // 2
cut_position = 0

for i in range(1, len(arr)):
    current_diff = abs(2 * sum(arr[:i]) - total_sum)
    if current_diff < min_diff or (
        current_diff == min_diff and sum(arr[:i]) <= sum(arr[cut_position:])
    ):
        min_diff = current_diff
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(subvector1)
print(subvector2)