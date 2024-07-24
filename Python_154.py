def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2

# Example usage
print(cycpattern_check("abcabc", "abc"))  # Output should be True