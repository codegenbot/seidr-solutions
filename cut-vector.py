arr = [3, 1, 2, 4, 3]
min_diff = float('inf')
cut_position = -1

for i in range(1, len(arr)):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    if abs(left_sum - right_sum) < min_diff:
        min_diff = abs(left_sum - right_sum)
        cut_position = i

subvector1 = arr[:cut_position]
subvector2 = arr[cut_position:]

print(subvector1)
print(subvector2)