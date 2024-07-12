n = int(input())
v = [int(input()) for _ in range(n)]
diff = float("inf")
idx = -1
for i in range(1, n):
    d = abs(sum(v[:i]) - sum(v[i:]))
    if d < diff:
        diff = d
        idx = i
print(*v[:idx])
print(*v[idx:])