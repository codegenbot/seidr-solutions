n = int(input())
arr = list(map(int, input().split()))

cumulative_sum = [0]
for num in arr:
    cumulative_sum.append(cumulative_sum[-1] + num)

total_sum = cumulative_sum[-1]
min_diff = abs(arr[0] - total_sum)
cut_index = 0

for i in range(1, n):
    diff = abs(cumulative_sum[i] - (total_sum - cumulative_sum[i]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)