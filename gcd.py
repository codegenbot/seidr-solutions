def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def indices_of_substring(text, target):
    return [match.start() for match in re.findall(target, text)]