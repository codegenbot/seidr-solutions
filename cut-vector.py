n = int(input())
arr = [int(input()) for _ in range(n)]
diff = float("inf")
index = -1
for i in range(1, n):
    cur_diff = abs(sum(arr[:i]) - sum(arr[i:]))
    if cur_diff < diff:
        diff = cur_diff
        index = i
print("\n".join(map(str, arr[:index])))
print("\n".join(map(str, arr[index:])))