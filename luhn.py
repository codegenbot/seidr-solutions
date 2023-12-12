```python
def luhn(digits):
    digits = list(map(int, digits.split()))
    for i in range(len(digits)-2, -1, -2):
        digits[i] *= 2
        if digits[i] > 9:
            digits[i] -= 9
    return sum(digits)

digits = input()
print(luhn(digits))
```