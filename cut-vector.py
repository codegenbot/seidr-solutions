arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = total_sum
cut_index = -1

for i in range(len(arr)):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i
    elif diff == min_diff:
        if i < len(arr) - 1 and abs(sum(arr[:i+1]) - sum(arr[i+1:])) < abs(sum(arr[:cut_index+1]) - sum(arr[cut_index+1:])):
            cut_index = i

subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)