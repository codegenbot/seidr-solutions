n = int(input())
v = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = -1
for i in range(1, n):
    curr_diff = abs(sum(v[:i]) - sum(v[i:]))
    if curr_diff < diff:
        diff = curr_diff
        cut_idx = i

print(*v[:cut_idx])
print(*v[cut_idx:])