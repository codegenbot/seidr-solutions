def is_happy(s):
    if len(s) < 3:
        return False
    for i in range(0, len(s), 3):
        chunk = s[i:i+3]
        if not all(c.isalpha() or c.isspace() for c in chunk):
            return False
    return True

s = input("Enter a string: ")
print(is_happy(s))