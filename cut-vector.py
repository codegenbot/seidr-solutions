n = int(input())
arr = list(map(int, input().split()))

min_diff = float('inf')
cut_index = -1

for i in range(1, n):
    sum_left = sum(arr[:i])
    sum_right = sum(arr[i:])
    diff = abs(sum_left - sum_right)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)