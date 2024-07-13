n = int(input())
a = [int(input()) for _ in range(n)]

total_sum = sum(a)
half_sum = total_sum // 2

prefix_sums = [0]
for num in a:
    prefix_sums.append(prefix_sums[-1] + num)

diff = float("inf")
cut_point = -1

for i in range(1, n):
    current_diff = abs(prefix_sums[i] - (total_sum - prefix_sums[i]))
    if current_diff < diff:
        diff = current_diff
        cut_point = i

print(a[:cut_point])
print(a[cut_point:])