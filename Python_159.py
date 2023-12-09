```
def eat(number, need, remaining):
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]

# test case 1
assert eat(4, 5, 1) == [9, 2]

# test case 2
assert eat(4, 5, 6) == [9, 3]
```