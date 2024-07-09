def solve(s):
    result = ""
    for char in s:
        if char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result if any(char.isalpha() for char in s) else s[::-1]