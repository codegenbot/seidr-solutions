n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = float('inf')
cut_index = -1

for i in range(n):
    prefix_sum += a[i]
    curr_diff = abs(2 * prefix_sum - total_sum)
    if prefix_sum == half_sum or curr_diff < min_diff:
        min_diff = curr_diff
        cut_index = i

print(*a[: cut_index + 1], sep="\n")
print(*a[cut_index + 1 :], sep="\n")