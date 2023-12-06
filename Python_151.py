```
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 == 1 and num > 0:
            result += num ** 2
    return result

def odd_sum(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num
    return result
```