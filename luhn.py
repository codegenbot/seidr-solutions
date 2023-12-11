
>>> def luhn(digits):
...     digits = list(map(int, digits))
...     result = 0
...     for i in range(1, len(digits) + 1):
...         if i % 2 == 0:
...             digits[i - 1] *= 2
...             if digits[i - 1] > 9:
...                 digits[i - 1] -= 9
...         result += digits[i - 1]
...     return result
>>> luhn([16, 0, 4, 1, 3, 2, 9, 0, 9, 6, 5, 6, 9, 8, 5, 7, 8])
76