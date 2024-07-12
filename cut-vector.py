arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
min_diff = abs(total_sum - 2*arr[0])
cut_index = 0

for i in range(len(arr)):
    right_sum = total_sum - left_sum - arr[i]
    diff = abs(left_sum - right_sum)
    if left_sum == right_sum or diff < min_diff:
        min_diff = diff
        cut_index = i
    left_sum += arr[i]

print(arr[:cut_index+1], arr[cut_index+1:])