def gcd(a, b):
    from math import gcd, abs

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target or text[i-1:i+len(target)-1] == target]
```