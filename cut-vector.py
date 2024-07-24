n = int(input())
values = [int(input()) for _ in range(n)]

total_sum = sum(values)
prefix_sum = 0
min_diff = total_sum
cut_index = -1

for i in range(n):
    prefix_sum += values[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff or (diff == min_diff and cut_index == -1):
        min_diff = diff
        cut_index = i

subvector1 = values[: cut_index + 1]
subvector2 = values[cut_index + 1 :]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")