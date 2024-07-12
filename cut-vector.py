n = len(arr)
for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i + 1

    if left_sum == right_sum or min_diff == 0:
        cut_index = i + 1
        break