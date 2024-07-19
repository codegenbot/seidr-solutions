def check_strings(a, b):
    return len(a) == len(b) and b in a * 2 and a != b

# Corrected code
result = check_strings("abc", "bca")
print(result)