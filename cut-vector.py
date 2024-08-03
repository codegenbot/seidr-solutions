n = int(input())
v = [int(input()) for _ in range(n)]
diff = float("inf")
idx = 0
for i in range(1, n):
    new_diff = abs(sum(v[:i]) - sum(v[i:]))
    if new_diff < diff:
        diff = new_diff
        idx = i
print(*v[:idx])
print(*v[idx:])