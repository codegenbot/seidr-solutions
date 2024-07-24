n = int(input())
v = [int(input()) for _ in range(n)]
diff = float("inf")
cut_point = 0
for i in range(1, n):
    if abs(sum(v[:i]) - sum(v[i:])) < diff:
        diff = abs(sum(v[:i]) - sum(v[i:]))
        cut_point = i
print(*v[:cut_point])
print(*v[cut_point:])