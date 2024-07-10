a = list(map(int, input().split()))

split_index = min(range(1, len(a)), key=lambda i: abs(sum(a[:i]) - sum(a[i:])))

print(*a[:split_index], sep="\n")
print(*a[split_index:], sep="\n")