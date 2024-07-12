```
def solve(s):
    result = []
    for c in s:
        if c.isalpha():
            result.append(c.swapcase())
        else:
            result.append(c)
    return ''.join(reversed(result)) if not any(c.isalpha() for c in s) else ''.join(result)