arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(len(arr) - 1):
    right_sum = total_sum - left_sum - arr[i]
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:
        min_diff = diff
        cut_index = i
    left_sum += arr[i]

if cut_index == 0:
    cut_index += 1

subvector1 = arr[:cut_index+1]
subvector2 = arr[cut_index+1:]

print(*subvector1)
print(*subvector2)