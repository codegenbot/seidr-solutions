def cycpattern_check(a, b):
    return len(a) == len(b) and b in a + a

print(cycpattern_check("winemtt", "tinem"))  # Output will be True