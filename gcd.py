def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    """
    Returns a list of indices where the target string appears in the text.
    If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.
    """
    # Initialize variables
    i = 0
    j = 0
    indices = []

    # Loop through the text and find occurrences of the target string
    while i < len(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
        i += 1

    return indices