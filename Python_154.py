def cycpattern_check(a, b):
    return len(a) == len(b) and b in a * 2 and a != b

result = cycpattern_check("abab", "ab")
print(result)