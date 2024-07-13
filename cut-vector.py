n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
min_diff = float("inf")
cut_index = -1

for i in range(1, n):
    prefix_sum = sum(arr[:i])
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)