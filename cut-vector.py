a = list(map(int, input().split()))
if len(a) < 3:
    print("Input list should contain at least two elements.")
else:
    min_diff = min(abs(sum(a[:i]) - sum(a[i:])) for i in range(1, len(a)))
    if min_diff <= sum(a):
        split_index = next(i for i in range(1, len(a)) if abs(sum(a[:i]) - sum(a[i:])) == min_diff)
        print(*a[:split_index], sep="\n")
        print(*a[split_index:], sep="\n")
    else:
        print(*a, sep="\n")