lst = list(map(int, input().split()))
split_idx = min(range(len(lst)), key=lambda i: abs(sum(lst[:i]) - sum(lst[i:])))
left = lst[:split_idx]
right = lst[split_idx:]
print(left, right)