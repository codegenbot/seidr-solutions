right_sum = total_sum - arr[0]
min_diff = abs(arr[0] - right_sum)
cut_index = 0

for i in range(1, n):
    diff = abs(sum(arr[:i]) - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)