n = int(input())
a = [int(input()) for _ in range(n)]

diff = abs(sum(a) - 2 * max(a))
cut_index = 0
prefix_sum = 0
for i in range(n):
    prefix_sum += a[i]
    new_diff = abs(sum(a) - 2 * prefix_sum)
    if new_diff <= diff:
        diff = new_diff
        cut_index = i

print(a[: cut_index + 1])
print(a[cut_index + 1 :])