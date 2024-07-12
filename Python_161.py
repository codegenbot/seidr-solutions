```
def solve(s):
    result = []
    for char in s:
        if char.isalpha():
            result.append(char.swapcase())
        else:
            result.append(char)
    return ''.join(reversed(result)) if not any(c.isalpha() for c in s) else ''.join(result)