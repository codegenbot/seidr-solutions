n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
prefix_sum = 0
min_diff = total_sum
cut_idx = 0

for i in range(n):
    prefix_sum += v[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(*v[: cut_idx + 1])
print(*v[cut_idx + 1 :] if cut_idx + 1 < n else [0])