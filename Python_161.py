def solve(s):
    result = ""
    for char in s:
        if char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result if any(c.isalpha() for c in s) else s[::-1]