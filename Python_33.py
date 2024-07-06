```python
def sort_third(l: list):
    return [
        (
            i,
            x if i % 3 != 0 else sorted([x for x in l if x % 3 == 0])[-1] if any(x % 3 == 0 for x in l) else 0
        )
        for i, x in sorted((x[2], x) for x in zip(l, [0]*len(l)))
    ]