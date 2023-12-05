```
def hex_key(num):
    count = 0
    for digit in num:
        if digit in "2357ABD":
            count += 1
    return count
```