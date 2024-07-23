n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
prefix_sum = 0
best_diff = total_sum
cut_index = 0

for i in range(n):
    prefix_sum += v[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < best_diff:
        best_diff = diff
        cut_index = i

subvector1 = v[: cut_index + 1]
subvector2 = v[cut_index + 1 :]

print(*subvector1)
print(*subvector2)