arr = [3, 1, 2, 4, 3]
total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_position = -1

for i in range(len(arr)):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    if abs(left_sum - right_sum) <= min_diff:
        min_diff = abs(left_sum - right_sum)
        cut_position = i

subvector1 = arr[:cut_position + 1]
subvector2 = arr[cut_position + 1:]

print(subvector1)
print(subvector2)