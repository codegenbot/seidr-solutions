arr = list(map(int, input().split()))
total_sum = sum(arr)
left_sum = 0
min_diff = float('inf')
cut_index = 0

for i in range(len(arr)):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff or left_sum == right_sum:
        cut_index = i + 1
        if diff < min_diff:
            min_diff = diff

print(arr[:cut_index], arr[cut_index:])