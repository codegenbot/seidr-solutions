```
def luhn(digits):
    sum = 0
    is_odd = len(digits) % 2 == 1
    for i in range(len(digits) - 1, -1, -1):
        digit = int(digits[i])
        if is_odd:
            digit *= 2
        if digit > 9:
            digit -= 9
        sum += digit
        is_odd = not is_odd
    return sum
```