n = int(input())
vec = [int(input()) for _ in range(n)]
diff = float("inf")
cut_idx = -1
for i in range(1, n):
    new_diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if new_diff < diff:
        diff = new_diff
        cut_idx = i

print(*vec[:cut_idx])
print(*vec[cut_idx:])