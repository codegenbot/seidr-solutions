n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
left_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += v[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*v[: cut_index + 1])
print(*v[cut_index + 1 :])