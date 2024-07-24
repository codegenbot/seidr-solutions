n = int(input())
v = [int(input()) for _ in range(n)]
total = sum(v)
pref_sum = 0
min_diff = total
cut_index = -1

for i in range(n):
    pref_sum += v[i]
    diff = abs(pref_sum - (total - pref_sum))
    if diff < min_diff:
        min_diff = diff
        cut_index = iement = v[: cut_index + 1], v[cut_index + 1 :]
print(*left_subvector, sep="\n")
print(*right_subvector, sep="\n")