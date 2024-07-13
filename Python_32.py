```python
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    root = (-xs[1] / xs[0]) ** (1/float(len(xs)-1))
    return round(root, 2)