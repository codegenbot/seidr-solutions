n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
half_sum = total_sum // 2

prefix_sum = 0
min_diff = float("inf")
cut_idx = -1

for i in range(n):
    prefix_sum += arr[i]
    diff = abs(total_sum - 2 * prefix_sum)
    if diff <= min_diff:  
        min_diff = diff
        cut_idx = i

subvector1 = arr[: cut_idx + 1] if sum(arr[:cut_idx+1]) >= sum(arr[cut_idx+1:]) else arr[:cut_idx+2]
subvector2 = arr[cut_idx + 1:]

print(*subvector1, sep="\n")
print(*subvector2, sep="\n")