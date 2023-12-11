def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    """
    Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
    For example,
    input:
    "hello"
    "ll"
    output:
    [2, 3]
    """
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]