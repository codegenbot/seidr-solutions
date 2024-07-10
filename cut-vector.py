a = list(map(int, input().split()))

min_diff = float('inf')
split_index = 0
for i in range(1, len(a)):
    diff = abs(sum(a[:i]) - sum(a[i:]))
    if diff < min_diff:
        min_diff = diff
        split_index = i

print(*a[:split_index], sep="\n")
print(*a[split_index:], sep="\n")