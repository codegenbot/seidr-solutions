[PYTHON]
def gcd(a, b):
    if a < 0 or b < 0:
        raise ValueError("Both inputs must be positive")
    return max(a, b) // min(a, b)

def indices_of_substring(text, target):
    import re
    return [m.start() for m in re.finditer(target, text)]
[/PYTHON]

```