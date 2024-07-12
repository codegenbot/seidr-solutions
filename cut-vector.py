arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = float('inf')
cut_index = -1

for i in range(len(arr)):
    left_sum = sum(arr[:i+1])
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)