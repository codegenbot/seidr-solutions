def cycpattern_check(a, b):
    return any(b in a[i:] + a[:i] for i in range(len(a)))

print(cycpattern_check("winemtt", "tinem"))  # Output: True