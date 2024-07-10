def solve(s):
    return ''.join([char.upper() if char.islower() else char.lower() if char.isupper() else char for char in s])