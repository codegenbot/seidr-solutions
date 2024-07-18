n = int(input())
v = [int(input()) for _ in range(n)]

total_sum = sum(v)
partial_sum = 0
min_diff = float("inf")
cut_position = 0

for i in range(n):
    partial_sum += v[i]
    other_sum = total_sum - partial_sum
    diff = abs(partial_sum - other_sum)
    if diff < min_diff:
        min_diff = diff
        cut_position = i

subvector1 = v[: cut_position + 1]
subvector2 = v[cut_position + 1 :]

print(*subvector1)
print(*subvector2)