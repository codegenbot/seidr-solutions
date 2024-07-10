def cycpattern_check(a, b):
    return len(a) == len(b) and set(a) == set(b) and (a + a).find(b) != -1

# Example usage
result = cycpattern_check("winemtt", "tinem")
print(result)