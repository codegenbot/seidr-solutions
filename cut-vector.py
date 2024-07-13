n = int(input())
vec = [int(input()) for _ in range(n)]

total_sum = sum(vec)
half_sum = total_sum // 2

prefix_sums = [0]
for v in vec:
    prefix_sums.append(prefix_sums[-1] + v)

min_diff = float("inf")
cut_point = 0

for i in range(1, n):
    diff = abs(prefix_sums[i] - (total_sum - prefix_sums[i]))
    if diff < min_diff:
        min_diff = diff
        cut_point = i

print(vec[:cut_point])
print(vec[cut_point:])