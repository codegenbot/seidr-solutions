n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
cut_index = 0

for i in range(1, n):
    curr_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if curr_diff < diff:
        diff = curr_diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])