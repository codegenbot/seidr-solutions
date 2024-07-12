n = int(input())
arr = list(map(int, input().split()))

min_diff = abs(sum(arr[:-1]) - arr[-1])
cut_index = 0

for i in range(n - 2, -1, -1):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)