def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2

# Test the function
print(cycpattern_check("abcabc", "cab"))  # True
print(cycpattern_check("abcd", "cda"))    # False