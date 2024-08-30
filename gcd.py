```
def gcd(a, b):
    """Given two integers, return the largest integer that divides each of the integers evenly."""
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    """Return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned."""
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target, i)
        if pos != -1:
            result.append(pos)
            i = pos + 1
        else:
            break
    return result