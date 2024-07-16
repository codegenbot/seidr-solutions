def solve(s: str) -> str:
    return ''.join([c.upper() if c.islower() else c.lower() for c in s])[::-1]