```python
def find_zero(xs):
    x = int(input("Enter a number: "))
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    return result
```