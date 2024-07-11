n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(n):
    prefix_sum += vec[i]
    current_diff = abs(total_sum - 2 * prefix_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_index = i

subvector1 = vec[: cut_index + 1]
subvector2 = vec[cut_index + 1 :]

print(*subvector1)
print(*subvector2)