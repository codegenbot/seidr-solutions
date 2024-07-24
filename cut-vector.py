n = int(input())
v = [int(input()) for _ in range(n)]

diff = float("inf")
cut_idx = 0

for i in range(1, n):
    cur_diff = abs(sum(v[:i]) - sum(v[i:]))
    if cur_diff < diff:
        diff = cur_diff
        cut_idx = i

subvector1 = v[:cut_idx]
subvector2 = v[cut_idx:]

for num in subvector1:
    print(num)

for num in subvector2:
    print(num)