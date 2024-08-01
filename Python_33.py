```
def sort_third(l: list):
    max_val = float('-inf')
    for i, val in enumerate(l):
        l[i] = val if i % 3 != 0 else max(max_val, val)
        max_val = max(max_val, val) if i % 3 == 0 else max_val
    return l