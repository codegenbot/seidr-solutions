n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
prefix_sum = 0
min_diff = float("inf")
cut_idx = -1

for i in range(n):
    prefix_sum += v[i]
    diff = abs(2 * prefix_sum - total_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*v[: cut_idx + 1])
print(*v[cut_idx + 1 :])