[PYTHON]
def circular_shift(x, shift):
    # convert integer to string
    s = str(x)
    # get length of string
    n = len(s)
    # if shift is greater than number of digits, return reversed string
    if shift > n:
        return s[::-1]
    # otherwise, rotate the string by shift digits
    else:
        return s[n-shift:] + s[:n-shift]
[/PYTHON]
[TESTS]
# Test case 1:
assert circular_shift(12, 1) == "21"
# Test case 2:
assert circular_shift(12, 2) == "12"
# Test case 3:
assert circular_shift(123, 1) == "231"
# Test case 4:
assert circular_shift(123, 2) == "312"
# Test case 5:
assert circular_shift(123, 3) == "123"
[/TESTS]

```