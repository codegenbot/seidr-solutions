def solve(s):
    result = ""
    for char in s:
        if char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result[::-1] if not any(c.isalpha() for c in s) else result