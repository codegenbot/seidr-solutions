n = int(input())
vec = [int(input()) for _ in range(n)]

min_diff = float("inf")
cut_index = 0

for i in range(1, n):
    diff = abs(sum(vec[:i]) - sum(vec[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*vec[:cut_index])
print(*vec[cut_index:])