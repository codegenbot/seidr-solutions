n = int(input())
v = [int(input()) for _ in range(n)]
min_diff = float("inf")
cut_index = 0
for i in range(1, n):
    diff = abs(sum(v[:i]) - sum(v[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i
print(*v[:cut_index])
print(*v[cut_index:])