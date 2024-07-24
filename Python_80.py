```
def is_happy(s):
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        has_lower = any(c.islower() for c in chunk)
        has_upper = any(c.isupper() for c in chunk)
        has_digit = any(c.isdigit() for c in chunk)
        if not (has_lower and has_upper and has_digit):
            return False
    return True

s = input("Enter a string: ")
print(is_happy(s))