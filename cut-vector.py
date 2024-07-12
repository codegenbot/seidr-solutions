n = int(input())
arr = list(map(int, input().split()))

cumulative_sum = [0] * (n + 1)
for i in range(1, n + 1):
    cumulative_sum[i] = cumulative_sum[i - 1] + arr[i - 1]

min_diff = abs(cumulative_sum[-1] - 2 * cumulative_sum[1])
cut_index = 1

for i in range(2, n):
    diff = abs(cumulative_sum[i] - (cumulative_sum[-1] - cumulative_sum[i]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)