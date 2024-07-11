```python
def sort_third(l):
    return [
        x if i % 3 != 0 else min([y for y in l if (i - j) % 3 != 0], key=lambda x: x)
        for i, x in enumerate(sorted(l))
    ]