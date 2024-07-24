n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
current_sum = 0
min_diff = float("inf")
cut_position = 0

for i in range(n):
    current_sum += v[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_position = i

print(*v[: cut_position + 1])
print(*v[cut_position + 1 :])