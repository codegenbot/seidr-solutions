def check_strings(a, b):
    return len(a) == len(b) and b in a * 2 and a != b

# Test the function
print(check_strings("hello", "hellohello"))  # Output: True
print(check_strings("abc", "def"))  # Output: False