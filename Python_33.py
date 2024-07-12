```python
def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else sorted((y for y in l))[::-1][i % 3]
        )
        for i, (val) in enumerate(l)
    ]