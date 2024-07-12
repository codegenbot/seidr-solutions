arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(len(arr)):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if left_sum == right_sum or min_diff >= diff:
        min_diff = diff
        cut_index = i

cut_index += 1

print(arr[:cut_index], arr[cut_index:])