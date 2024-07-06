```
def solve(s):
    result = []
    for char in s:
        if char.isalpha():
            result.append(char.swapcase())
        else:
            result.append(char)
    return "".join(result) if any(c.isalpha() for c in s) else s[::-1]