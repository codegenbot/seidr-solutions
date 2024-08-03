n = int(input())
a = [int(input()) for _ in range(n)]
min_diff = abs(sum(a) - 2 * a[0])
cut_index = 0
for i in range(1, n):
    diff = abs(sum(a[:i]) - sum(a[i:]))
    if diff < min_diff:
        min_diff = diff
        cut_index = i

print(*a[:cut_index])
print(*a[cut_index:])