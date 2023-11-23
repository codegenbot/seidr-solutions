def solve(s):
    return ''.join([char.lower() if char.isupper() else char.upper() if char.islower() else char for char in s])[::-1] if any(char.isalpha() for char in s) else s[::-1]