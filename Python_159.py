```python
def eat(number, need, extra):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]

remaining = 10 # for example
eat(4, 5, 1) # should return [5, 0]
```