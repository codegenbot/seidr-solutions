n = int(input())
vec = [int(input()) for _ in range(n)]
total_sum = sum(vec)
prefix_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(n):
    prefix_sum += vec[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vec[: cut_index + 1])
print(*vec[cut_index + 1 :])