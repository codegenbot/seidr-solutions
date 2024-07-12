n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(arr[0] - sum(arr[1:]))
cut_index = 1

for i in range(2, n):
    left_sum = arr[i-2] + left_sum
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)