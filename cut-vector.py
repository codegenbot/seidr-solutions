n = list(map(int, input().split()))

total_sum = sum(n)
left_sum = 0
right_sum = total_sum

min_diff = float("inf")
cut_index = -1

for i in range(len(n)):
    left_sum += n[i]
    right_sum -= n[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = n[: cut_index + 1]
subvector2 = n[cut_index + 1 :]

print(*subvector1)
print(*subvector2)