n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = total_sum
cut_index = -1

for i in range(n):
    left_sum += arr[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff <= min_diff:  # Change < to <=
        min_diff = diff
        cut_index = i

subvector1 = arr[: cut_index + 1 if cut_index < n - 1 else n]
subvector2 = arr[cut_index + 1 if cut_index < n - 1 else n :]

print(*subvector1)
print(*subvector2)