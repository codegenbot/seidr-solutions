```python
def double_the_difference(x):
    if len(x) < 2:
        return x[0]
    return (x[1] - x[0]) * 2

def check(lst, func):
    result = [func(i) for i in lst]
    return result

print(check([1, 2, 3], lambda x: double_the_difference(x)))