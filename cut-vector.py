n = 0
arr = list(map(int, input().split()))

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = float("inf")
cut_index = -1

for i in range(len(arr)):
    prefix_sum += arr[i]
    diff = abs(prefix_sum - (total_sum - prefix_sum))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*arr[: cut_index + 1])
print(*arr[cut_index + 1 :])