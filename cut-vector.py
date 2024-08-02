n, v = 0, list(map(int, input().split()))
total_sum = sum(v)
left_sum, right_sum = 0, total_sum
min_diff, cut_index = float("inf"), -1

for i in range(n):
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