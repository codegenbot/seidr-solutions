vec = list(map(int, input().split()))
diff = float("inf")
cut_idx = 0
n = len(vec)
for i in range(1, n):
    curr_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if curr_diff < diff:
        diff = curr_diff
        cut_idx = i
print(*vec[:cut_idx])
print(*vec[cut_idx:])