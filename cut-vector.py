n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
current_sum = 0
cut_point = 0
min_diff = float("inf")

for i in range(n):
    current_sum += v[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_point = i

print(*v[: cut_point + 1])
print(*v[cut_point + 1 :])