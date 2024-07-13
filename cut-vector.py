n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
cut_point = 0

for i in range(1, n):
    left_sum = sum(arr[:i])
    right_sum = sum(arr[i:])
    current_diff = abs(left_sum - right_sum)
    if current_diff < diff:
        diff = current_diff
        cut_point = i

print(*arr[:cut_point])
print(*arr[cut_point:])