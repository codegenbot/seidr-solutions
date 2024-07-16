def solve(s):
    if not s:
        return ''
    return ''.join([c.upper() if c.islower() else c.lower() if c.isupper() else c for c in s[::-1]])