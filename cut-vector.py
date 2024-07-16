n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sums = [0]
for num in arr:
    prefix_sums.append(prefix_sums[-1] + num)

best_diff = float("inf")
best_index = -1

for i in range(1, n):
    diff = abs(prefix_sums[i] - (total_sum - prefix_sums[i]))
    if diff < best_diff:
        best_diff = diff
        best_index = i

if best_diff == 0:
    print(*arr[:best_index])
    print(*arr[best_index:])
else:
    print(*arr)
    print(0)