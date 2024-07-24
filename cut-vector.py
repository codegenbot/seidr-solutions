n = int(input())
a = [int(input()) for _ in range(n)]
total_sum = sum(a)
prefix_sum = 0
min_diff = total_sum
cut_index = -1

for i in range(n):
    prefix_sum += a[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = a[: cut_index + 1]
subvector2 = a[cut_index + 1 :]

print(*subvector1)
print(*subvector2)