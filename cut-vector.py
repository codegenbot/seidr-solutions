n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
cut_idx = 0

for i in range(1, n):
    new_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if new_diff < diff:
        diff = new_diff
        cut_idx = i

print(*arr[:cut_idx])
print(*arr[cut_idx:])