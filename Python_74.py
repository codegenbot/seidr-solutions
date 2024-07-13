```python
def total_match(lst1, lst2):
    matches = [s1 for s1 in set(lst1) if s1 in set(lst2)]
    return matches