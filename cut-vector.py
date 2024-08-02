n = int(input())
vec = [int(input()) for _ in range(n)]
idx = min(range(1, n), key=lambda i: abs(sum(vec[:i]) - sum(vec[i:])))
print(*vec[:idx])
print(*vec[idx:])