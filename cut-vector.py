n = int(input())
vec = [int(input()) for _ in range(n)]
min_diff = float("inf")

for i in range(1, n - 1):
    diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_point = i

print(*vec[:cut_point])
print(*vec[cut_point:])