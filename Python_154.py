def cycpattern_check(a, b):
    """You are given 2 words. You need to return True if the second word or any of its rotations is a substring in the first word"""

    for i in range(len(a)):
        if a[i:i+len(b)] == b:
            return True
    return False


print(cycpattern_check("abcd", "abd"))
print(cycpattern_check("hello", "ell"))
print(cycpattern_check("whassup", "psus"))
print(cycpattern_check("abab", "baa"))
print(cycpattern_check("efef", "eeff"))
print(cycpattern_check("himenss", "simen"))
