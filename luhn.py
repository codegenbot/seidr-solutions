The issue with the current code is that it does not take into account the fact that some of the digits may be greater than 9 after doubling them. To fix this, you need to add an extra step to subtract 9 from any digit that is greater than 9 after doubling it.

Here's the updated code:
```
def luhn(digits):
    digits = list(map(int, digits))
    result = 0
    for i in range(1, len(digits) + 1):
        if i % 2 == 0:
            digits[i - 1] *= 2
            if digits[i - 1] > 9:
                digits[i - 1] -= 9
        result += digits[i - 1]
    return result
```