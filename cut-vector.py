n = int(input())
vec = [int(input()) for _ in range(n)]
total_sum = sum(vec)
left_sum = 0
right_sum = total_sum
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += vec[i]
    right_sum -= vec[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vec[: cut_index + 1])
print(*vec[cut_index + 1 :])