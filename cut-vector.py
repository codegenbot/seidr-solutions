n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
left_sum = 0
min_diff = total_sum
cut_idx = 0

for i in range(n):
    left_sum += vec[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

subvector1 = vec[: cut_idx + 1]
subvector2 = vec[cut_idx + 1 :]

print(*subvector1)
print(*subvector2)