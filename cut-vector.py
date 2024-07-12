arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(1, len(arr)):
    right_sum = total_sum - left_sum - arr[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i
    left_sum += arr[i]

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)