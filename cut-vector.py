arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(len(arr)):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

cut_index = cut_index if cut_index != -1 else len(arr) // 2
subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)