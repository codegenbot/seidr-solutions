def cycpattern_check(a, b):
    return len(a) >= len(b) and b in a * 2

# Test cases
print(cycpattern_check("abcabc", "abc"))  # True
print(cycpattern_check("hello", "lohel"))  # False