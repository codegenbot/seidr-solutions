def cycpattern_check(a, b):
    return b in a and b in a + a

# Test the function
print(cycpattern_check("winemtt", "tinem"))  # Output: True