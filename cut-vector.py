n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
cut_index = 0

for i in range(1, n):
    new_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if new_diff < diff:
        diff = new_diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])