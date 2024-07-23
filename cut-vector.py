n = int(input())
a = [int(input()) for _ in range(n)]

prefix_sum = [0] + list(itertools.accumulate(a))

total_sum = prefix_sum[-1]
best_diff = float("inf")
cut_point = -1

for i in range(1, n):
    diff = abs(prefix_sum[i] - (total_sum - prefix_sum[i]))
    if diff < best_diff:
        best_diff = diff
        cut_point = i

print(*a[:cut_point])
print(*a[cut_point:])