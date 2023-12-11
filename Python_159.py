
Here is the modified code as per the problem description:
```python
def eat(number, need, remaining):
    if need > remaining:
        return [0, remaining]
    else:
        return [need - remaining, 0]
```
