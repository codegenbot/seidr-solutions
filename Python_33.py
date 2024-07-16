```python
def sort_third(l: list):
    sorted_divisible_by_3 = sorted([i for i in l if i % 3 == 0])
    return [sorted_divisible_by_3[j] if j < len(sorted_divisible_by_3) else i for j, i in enumerate(l)]