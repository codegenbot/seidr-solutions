Here is the modified code:

```python
import math

def factorial(x):
    if x == 0:
        return 1
    else:
        return x * factorial(x-1)

def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(math.factorial(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

while True:
    try:
        num = int(input("Enter a number: "))
        print(f(num))
    except ValueError:
        print("Invalid input. Please enter an integer.")