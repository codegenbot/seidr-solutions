n = int(input())
v = [int(input()) for _ in range(n)]
total_sum = sum(v)
curr_sum = 0
min_diff = total_sum
cut_idx = 0

for i in range(n):
    curr_sum += v[i]
    diff = abs(total_sum - 2 * curr_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

output1 = v[: cut_idx + 1]
output2 = v[cut_idx + 1 :]

print(*output1)
print(*output2)