n = map(int, input().split())
v = list(n)

total_sum = sum(v)
left_sum = 0
right_sum = total_sum
min_diff = float("inf")
cut_index = -1

for i in range(len(v)):
    left_sum += v[i]
    right_sum -= v[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = v[: cut_index + 1]
subvector2 = v[cut_index + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")