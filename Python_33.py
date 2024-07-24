```python
def sort_third(l: list):
    return [sum(sorted([x for x in l[i::3]])) if i % 3 == 0 else x 
            for i, x in enumerate(l)]