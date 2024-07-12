```python
min_diff = float('inf')
split_idx = 0

for i in range(1, len(lst)):
    diff = abs(sum(lst[:i]) - sum(lst[i:]))
    if diff < min_diff:
        min_diff = diff
        split_idx = i

left = lst[:split_idx]
right = lst[split_idx:]

print(left, right)