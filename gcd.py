```
def gcd(a, b):
    if b == 0:
        return a
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if len(target) > 1 and text[i:i+len(target)] == target:
            indices.append(i)
    return indices
```