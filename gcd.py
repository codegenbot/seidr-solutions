```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    """Return a vector of integers of the indices at which the target appears in the text."""
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result