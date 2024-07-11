n = int(input())
arr = [int(input()) for _ in range(n)]

diff = float("inf")
idx = 0
for i in range(1, n):
    if abs(sum(arr[:i]) - sum(arr[i:])) < diff:
        diff = abs(sum(arr[:i]) - sum(arr[i:]))
        idx = i

print(*arr[:idx])
print(*arr[idx:])