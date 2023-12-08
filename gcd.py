
```
def gcd(a, b):
    if a < 0 or b < 0:
        raise ValueError("Both inputs must be positive")
    return (a or b) // (b or a)

def indices_of_substring(text, target):
    import re
    indices = [m.start() for m in re.finditer(target, text)]
    return [i - 1 for i in indices if text[i] == text[indices[-1]]]
```