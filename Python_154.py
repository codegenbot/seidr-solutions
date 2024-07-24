def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2

# Test cases
print(cycpattern_check("abcde", "cde"))  # True
print(cycpattern_check("hello", "world"))  # False
print(cycpattern_check("ababab", "ab"))  # True