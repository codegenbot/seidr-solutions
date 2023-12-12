[PYTHON]
def int_to_mini_roman(number):
    romanNumerals = ["m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"]
    result = ""
    while number > 0:
        digit = number % 10
        if digit < 4:
            for _ in range(digit):
                result += romanNumerals[digit]
        elif digit == 4:
            result += "iv"
        elif digit == 9:
            result += "ix"
        else:
            for i in range(digit - 5, 0, -1):
                result += romanNumerals[i]
            result += "v"
        number //= 10
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert int_to_mini_roman(49) == "XLV"
# Test case 2:
assert int_to_mini_roman(123) == "CXXIII"
# Test case 3:
assert int_to_mini_roman(789) == "DCCLXXXIX"
[/TESTS]
