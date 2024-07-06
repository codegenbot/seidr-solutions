```python
def find_zero(xs):
    if not xs:  
        x1 = int(input("Enter first number: "))
        x2 = int(input("Enter second number: "))
    else:
        x1, x2 = xs
    n = (x1 + x2) // 2
    return -n / x2