n = int(input())
v = [int(input()) for _ in range(n)]

min_diff = float("inf")
cut_idx = -1

for i in range(n - 1):
    diff = abs(sum(v[: i + 1]) - sum(v[i + 1 :]))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*v[: cut_idx + 1])
print(*v[cut_idx + 1 :])