n = int(input())
v = [int(input()) for i in range(n)]

diff = float("inf")
cut_index = 0

for i in range(1, n):
    new_diff = abs(sum(v[:i]) - sum(v[i:]))
    if new_diff < diff:
        cut_index = i
        diff = new_diff

print(*v[:cut_index])
print(*v[cut_index:])