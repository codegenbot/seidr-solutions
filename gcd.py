[PYTHON]
def gcd(a, b):
    return abs(a) // abs(b) if b != 0 else abs(a)

def indices_of_substring(text, target):
    return [i for i, c in enumerate(text) if c == target]
[/PYTHON]
