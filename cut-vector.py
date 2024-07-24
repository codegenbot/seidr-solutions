n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
current_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    current_sum += a[i]
    diff = abs(total_sum - 2 * current_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = a[: cut_index + 1]
subvector2 = a[cut_index + 1 :]

print(*subvector1)
print(*subvector2)