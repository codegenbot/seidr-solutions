def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2

# Sample function call
print(cycpattern_check("abcabc", "abc"))  # Output: True