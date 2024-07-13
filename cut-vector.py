n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
left_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(n):
    left_sum += v[i]
    right_sum = total_sum - left_sum
    curr_diff = abs(left_sum - right_sum)
    if curr_diff < min_diff:
        min_diff = curr_diff
        cut_index = i

print(*v[: cut_index + 1])
print(*v[cut_index + 1 :])