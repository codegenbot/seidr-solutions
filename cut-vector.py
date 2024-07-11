n = int(input())
vec = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = 0
for i in range(1, n):
    if abs(sum(vec[:i]) - sum(vec[i:])) < diff:
        diff = abs(sum(vec[:i]) - sum(vec[i:]))
        cut_idx = i

print(*vec[:cut_idx])
print(*vec[cut_idx:])