```
def gcd(a, b):
    if a < 0 or b < 0:
        raise ValueError("Both inputs must be positive")

    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    n = len(target)
    indices = []
    for i in range(len(text)):
        if text[i:i+n] == target:
            indices.append(i)
    return indices
``` 
