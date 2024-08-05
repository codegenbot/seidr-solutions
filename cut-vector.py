n = int(input())
a = [int(input()) for _ in range(n)]
idx = min(range(1, n), key=lambda i: abs(sum(a[:i]) - sum(a[i:])))
print(sum(a[:idx]))
print(sum(a[idx:]))