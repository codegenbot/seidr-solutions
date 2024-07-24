def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a + a)

# Test the function
print(cycpattern_check('abcd', 'cdab')) # Output: True
print(cycpattern_check('hello', 'world')) # Output: False