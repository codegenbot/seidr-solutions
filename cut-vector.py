arr = [3, 1, 2, 4, 3]
min_diff = abs(sum(arr) - arr[0]*2)
cut_position = 0

for i in range(len(arr)):
    left_sum = sum(arr[:i+1])
    right_sum = sum(arr[i+1:])
    if abs(left_sum - right_sum) < min_diff:
        min_diff = abs(left_sum - right_sum)
        cut_position = i

subvector1 = arr[:cut_position+1]
subvector2 = arr[cut_position+1:]

print(subvector1)
print(subvector2)