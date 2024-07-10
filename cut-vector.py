n = int(input())
arr = list(map(int, input().split()))

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(1, n):
    prefix_sum += arr[i-1]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

subvector1 = arr[:cut_index]
subvector2 = arr[cut_index:]

print(*subvector1)
print(*subvector2)