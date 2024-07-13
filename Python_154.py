def cycpattern_check(a, b):
    return b in (a + a)

# Test the function
assert cycpattern_check("winemtt", "tinem") == True