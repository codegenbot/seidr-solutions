n = int(input())
arr = list(map(int, input().split()))
diff = float("inf")
cut_index = 0

for i in range(1, n):
    current_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*arr[:cut_index])
print(*arr[cut_index:])