```python
def below_zero(inputs):
    balance = 0
    for operation in inputs:
        balance += operation
        if balance < 0:
            return True
    return False

inputs = [int(x) for x in input().split(",")]
print(below_zero(inputs))
```