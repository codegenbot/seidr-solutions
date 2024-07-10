n = int(input())
a = list(map(int, input().split()))

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = total_sum
split_index = -1

for i in range(n):
    prefix_sum += a[i]
    current_diff = abs(2 * prefix_sum - total_sum)
    if current_diff <= min_diff:
        min_diff = current_diff
        split_index = i

print(*a[:split_index + 1], sep="\n")
print(*a[split_index + 1:], sep="\n")