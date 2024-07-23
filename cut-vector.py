n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
min_diff = abs(arr[0] - total_sum + arr[0])
cut_index = 0

for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[: cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)