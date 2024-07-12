arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(total_sum - arr[0])
cut_index = 0

for i in range(len(arr) - 1):
    left_sum = sum(arr[:i+1])
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)