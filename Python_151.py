```
def double_the_difference(list):
    result = 0
    for num in list:
        if num % 2 != 0 and num > 0:
            result += num ** 2
    return result

lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))
```