n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

min_diff = float("inf")
idx = -1
for i in range(1, n):
    diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if diff < min_diff:
        min_diff = diff
        idx = i

print(*arr[:idx])
print(*arr[idx:])