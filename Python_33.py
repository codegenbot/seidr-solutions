```python
def sort_third(l: list):
    return [
        sum(sorted([x for x in l[max(0, i - 1):min(i + 3, len(l))]])) if len(l) > i+1 else x
        for i, x in enumerate(l)
    ]