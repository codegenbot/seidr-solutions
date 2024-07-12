n = int(input())
arr = list(map(int, input().split()))

cut_index = 0
min_diff = abs(sum(arr) - 2 * arr[0])

for i in range(1, n):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)