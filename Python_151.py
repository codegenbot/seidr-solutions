def double_the_difference(numbers):
    result = 0
    for num in numbers:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result
```