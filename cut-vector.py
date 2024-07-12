n = int(input())
arr = list(map(int, input().split()))

cut_index = 0
min_diff = abs(sum(arr[:2]) - sum(arr[2:]))

for i in range(2, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    diff = abs(left_sum - right_sum)

    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)