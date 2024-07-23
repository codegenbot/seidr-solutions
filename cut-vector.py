n = list(map(int, input().split()))

total_sum = sum(n)
left_sum = 0
min_diff = total_sum
cut_idx = -1

for i in range(len(n)):
    left_sum += n[i]
    right_sum = total_sum - left_sum
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

subvector1 = n[: cut_idx + 1]
subvector2 = n[cut_idx + 1 :]

print(*subvector1)
print(*subvector2)