n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum // 2
prefix_sum = 0
min_diff = float("inf")
cut_idx = 0

for i, num in enumerate(vec):
    prefix_sum += num
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

subvector1 = vec[: cut_idx + 1]
subvector2 = vec[cut_idx + 1 :]

print(*subvector1)
print(*subvector2)