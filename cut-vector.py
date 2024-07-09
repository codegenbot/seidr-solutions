n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
left_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(1, n):
    left_sum += arr[i - 1]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i - 1

subvector1 = arr[: cut_index + 1]
subvector2 = arr[cut_index + 1 :]

print(*subvector1)
print(*subvector2)