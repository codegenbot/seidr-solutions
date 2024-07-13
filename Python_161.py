def solve(s):
    result = []
    for c in s:
        if c.isalpha():
            result.append(c.swapcase())
        else:
            result.append(c)
    return "".join(result) if any(c.isalpha() for c in s) else s[::-1]