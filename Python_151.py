```
def double_the_difference(list):
    result = 0
    for num in list:
        if num % 2 != 0 and num > 0:
            result += num ** 2
    return result
```

# Test case
print(double_the_difference([1, 3, 5, 7])) # Should print 64