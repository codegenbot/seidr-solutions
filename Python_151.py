```
def double_the_difference(list):
    result = []
    for num in list:
        if num % 2 == 1 and num > 0:
            result.append(num ** 2)
    return sum(result)
```