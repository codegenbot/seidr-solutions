n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
curr_sum = 0
idx = 0
min_diff = float("inf")

for i in range(n):
    curr_sum += arr[i]
    diff = abs(total_sum - 2 * curr_sum)
    if diff < min_diff or (diff == min_diff and idx > i):
        min_diff = diff
        idx = i

part1 = arr[: idx + 1]
part2 = arr[idx + 1 :]

print(*part1)
print(*part2)