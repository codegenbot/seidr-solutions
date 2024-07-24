def cycpattern_check(a, b):
    return len(a) >= len(b) and b in a + a

# Test cases
print(cycpattern_check("abcabc", "abc"))  # True
print(cycpattern_check("abcabc", "cba"))  # False
print(cycpattern_check("xyzxyz", "xyz"))  # True