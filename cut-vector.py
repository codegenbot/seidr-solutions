arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = 0

for i in range(2, len(arr)):
    left_sum += arr[i-1]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if left_sum == right_sum or diff < min_diff:
        min_diff = diff
        cut_index = i

print(arr[:cut_index], arr[cut_index:])