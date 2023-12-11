def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    """
    Given a text string and a target string, return a vector of integers of the indices at which the target appears in the text. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
    """
    # Initialize variables
    n = len(text)
    m = len(target)
    i = 0
    j = 0
    indices = []

    # Iterate through the text and target strings
    while i < n:
        if text[i] == target[j]:
            j += 1
            if j == m:
                indices.append(i - m + 1)
                j = 0
        else:
            j = 0
        i += 1
    return indices