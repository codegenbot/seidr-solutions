n = int(input())
v = [int(input()) for _ in range(n)]
diff = float("inf")
idx = 0

for i in range(1, n):
    current_diff = abs(sum(v[:i]) - sum(v[i:]))
    if current_diff < diff:
        diff = current_diff
        idx = i

print(sum(v[:idx]), sum(v[idx:]))