arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = None
cut_index = -1

for i in range(len(arr) - 1):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    
    if min_diff is None or diff < min_diff or (diff == min_diff and arr[i] > arr[i + 1]):
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index + 1]
subvector2 = arr[cut_index + 1:]

print(*subvector1)
print(*subvector2)