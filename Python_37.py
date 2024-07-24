```python
def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2])
    odds = sorted([x for x in l if abs(x) % 2 != 0], reverse=True)
    result = [x for x in l if 0 <= x % 2] + sorted([x for x in l if abs(x) % 2 != 0 and x < 0], reverse=True)
    return tuple(result)