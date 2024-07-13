n = int(input())
values = [int(input()) for _ in range(n)]

total_sum = sum(values)
prefix_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    prefix_sum += values[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

first_subvector = values[: cut_index + 1]
second_subvector = values[cut_index + 1 :]

print(*first_subvector)
print(*second_subvector, 0)