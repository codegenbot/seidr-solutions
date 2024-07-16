def solve(s):
    result = []
    for c in s:
        if c.isalpha():
            if c.islower():
                result.append(c.upper())
            else:
                result.append(c.lower())
        else:
            result.append(c)
    return ''.join(result)