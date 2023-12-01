def solve(s):
    return ''.join([i.lower() if i.isupper() else i.upper() if i.islower() else i for i in s])[::-1]