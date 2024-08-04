n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
half_sum = total_sum // 2
prefix_sum = 0
best_diff = float("inf")
best_idx = -1

for i in range(n):
    prefix_sum += v[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < best_diff or (diff == best_diff and best_idx < 0):
        best_diff = diff
        best_idx = i

print(v[: best_idx + 1])
print(v[best_idx + 1 :])