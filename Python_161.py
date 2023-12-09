def solve(s):
    if not s:
        return ""
    if all(not c.isalpha() for c in s):
        return s[::-1]
    else:
        return "".join(c.lower() if c.isupper() else c.upper() for c in s)