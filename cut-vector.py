n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2
prefix_sum = 0
min_diff = total_sum
cut_index = 0

for i in range(n):
    prefix_sum += arr[i]
    if abs(total_sum - 2 * prefix_sum) < min_diff:
        min_diff = abs(total_sum - 2 * prefix_sum)
        cut_index = i

print(arr[: cut_index + 1])
print(arr[cut_index + 1 :])