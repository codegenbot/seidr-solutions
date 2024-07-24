def cycpattern_check(a, b):
    return len(a) == len(b) and b in (a + a) 

# Test the function with sample input
print(cycpattern_check("abcde", "cdeab")) # Output: True