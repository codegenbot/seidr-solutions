n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_position = -1

for i in range(n):
    left_sum += v[i]
    right_sum -= v[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_position = i

print(*v[: cut_position + 1])
print(*v[cut_position + 1 :])