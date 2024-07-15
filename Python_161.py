```
def solve(s):
    result = ""
    for char in s:
        if char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result[::-1] if not any(char.isalpha() for char in s) else result