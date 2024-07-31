```
def solve(s):
    result = ""
    uppercase = True
    for char in s:
        if char.isalpha():
            result += char.upper() if uppercase else char.lower()
            uppercase = not uppercase
        else:
            result += char
    return result if any(cisalpha() for c in s) else s[::-1]