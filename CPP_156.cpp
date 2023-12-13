[PYTHON]
def int_to_mini_roman(number):
    roman = ["m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"]
    result = ""
    while number > 0:
        digit = number % 10
        if digit < 4:
            for _ in range(digit):
                result += roman[number]
        elif digit == 4:
            result += "iv"
        elif digit == 5:
            result += "v"
        elif digit == 6:
            result += "vi"
        elif digit == 7:
            result += "vii"
        elif digit == 8:
            result += "viii"
        else:
            result += "ix"
        number //= 10
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert int_to_mini_roman(1) == "i"
# Test case 2:
assert int_to_mini_roman(4) == "iv"
# Test case 3:
assert int_to_mini_roman(5) == "v"
# Test case 4:
assert int_to_mini_roman(9) == "ix"
# Test case 5:
assert int_to_mini_roman(10) == "x"
# Test case 6:
assert int_to_mini_roman(40) == "xl"
# Test case 7:
assert int_to_mini_roman(50) == "l"
# Test case 8:
assert int_to_mini_roman(90) == "xc"
# Test case 9:
assert int_to_mini_roman(100) == "c"
# Test case 10:
assert int_to_mini_roman(400) == "cd"
# Test case 11:
assert int_to_mini_roman(500) == "d"
# Test case 12:
assert int_to_mini_roman(900) == "cm"
# Test case 13:
assert int_to_mini_roman(1000) == "m"
[/TESTS]
```