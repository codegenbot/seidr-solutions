```
def solve(s):
    result = ""
    for c in s:
        if c.isalpha():
            result += c.swapcase()
        else:
            result += c
    return result[::-1] if not any(c.isalpha() for c in s) else result