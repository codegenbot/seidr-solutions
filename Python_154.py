def cycpattern_check(a, b):
    return len(a) == len(b) and b in a + a and a != b

result = cycpattern_check("winemtt", "tinem")
print(result)