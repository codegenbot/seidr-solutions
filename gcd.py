```python
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
    indices = []

    # Iterate through the text and search for the target string
    for i in range(n - m + 1):
        if text[i:i+m] == target:
            indices.append(i)

    return indices
```
Note that the function `indices_of_substring` returns a list of integers representing the indices at which the target string appears in the input text.