```python
def sort_even(l: list):
    return [
        (
            i if i % 2 != 0 else sorted([x for x in l if x % 2 == 0])[::-1][i % 2]
        )
        for index, i in enumerate(l)
    ]