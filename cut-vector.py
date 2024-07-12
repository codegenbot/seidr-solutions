n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
left_sum = 0
right_sum = total_sum
min_diff = total_sum
cut_index = 0

for i in range(n):
    left_sum += v[i]
    right_sum -= v[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = v[: cut_index + 1]
subvector2 = v[cut_index + 1 :]

print(*subvector1)
print(*subvector2)