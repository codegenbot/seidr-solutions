n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
curr_sum = 0
min_diff = total_sum
cut_idx = -1

for i in range(n):
    curr_sum += arr[i]
    diff = abs(total_sum - 2 * curr_sum)
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

subvector1 = arr[: cut_idx + 1]
subvector2 = arr[cut_idx + 1 :]

print(subvector1)
print(subvector2)