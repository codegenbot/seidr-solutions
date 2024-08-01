```python
def find_zero(xs: list):
    return (-xs[1] / xs[0]) if len(xs) == 2 else (-xs[-1] / xs[-2])