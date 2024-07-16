```python
def leaders(a):
    leaders = [a[i] for i in range(len(a) - 1, -1, -1)]
    return [x for x in reversed(a)] + leaders