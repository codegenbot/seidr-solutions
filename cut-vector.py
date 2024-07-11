arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = 0

for i in range(2, len(arr)+1):
    left_sum += arr[i-2]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)