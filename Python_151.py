```
def double_the_difference():
    result = 0
    for num in range(1, 10):
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result
```