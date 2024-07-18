n = int(input())
a = [int(input()) for _ in range(n)]

diff = float("inf")
cut_index = -1
for i in range(1, n):
    current_diff = abs(sum(a[:i]) - sum(a[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*a[:cut_index])
print(*a[cut_index:])