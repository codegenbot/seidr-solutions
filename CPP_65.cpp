[PYTHON]
def circular_shift(x, shift):
    digits = list(str(x))
    if shift > len(digits):
        return "".join(reversed(digits))
    else:
        return "".join(digits[shift:] + digits[:shift])
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
