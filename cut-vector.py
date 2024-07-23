n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
left_sum = 0
idx = -1
min_diff = total_sum

for i in range(n):
    left_sum += vec[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        idx = i

print(*vec[: idx + 1])
print(*vec[idx + 1 :])