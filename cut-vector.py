n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
half_sum = total_sum // 2

prefix_sum = 0
best_diff = float("inf")
best_index = 0

for i in range(n):
    prefix_sum += v[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff <= best_diff:
        best_diff = diff
        best_index = i

print(*v[: best_index + 1])
print(*v[best_index + 1 :])