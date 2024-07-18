n = int(input())
arr = [int(input()) for _ in range(n)]

total_sum = sum(arr)
left_sum = 0
right_sum = total_sum

min_diff = float("inf")
cut_index = 0

for i in range(n):
    left_sum += arr[i]
    right_sum -= arr[i]
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*arr[: cut_index + 1])
print(*arr[cut_index + 1 :])