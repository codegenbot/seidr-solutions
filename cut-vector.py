n = int(input())
v = []
for i in range(n):
    v.append(int(input()))

total_sum = sum(v)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_position = 0

for i in range(n):
    left_sum += v[i]
    right_sum -= v[i]
    current_diff = abs(left_sum - right_sum)
    if current_diff < min_diff:
        min_diff = current_diff
        cut_position = i

subvector1 = v[: cut_position + 1]
subvector2 = v[cut_position + 1 :]

print(*subvector1)
print(*subvector2)