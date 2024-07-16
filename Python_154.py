def cycpattern_check(a, b):
    return b in a and b in a + a

print(cycpattern_check("winemtt", "tinem"))  # Output: True