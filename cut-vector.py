n = int(input())
arr = [int(input()) for _ in range(n)]
min_diff = float("inf")
cut_index = 0

for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    diff = abs(left_sum - right_sum)
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])