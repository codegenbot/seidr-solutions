n = int(input())
v = [int(input()) for _ in range(n)]
diff = float("inf")
cut_index = 0

for i in range(1, n):
    current_diff = abs(sum(v[:i]) - sum(v[i:]))
    if current_diff < diff:
        diff = current_diff
        cut_index = i

print(*v[:cut_index])
print(*v[cut_index:])