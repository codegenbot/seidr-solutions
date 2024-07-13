n = int(input())
vec = [int(input()) for _ in range(n)]
min_diff = float("inf")
cut_idx = 0

for i in range(1, n):
    diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_idx = i

print(vec[:cut_idx])
print(vec[cut_idx:])