```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

def get_largest_divisor(a, b):
    gcd_val = gcd(a, b)
    largest_divisor = a - gcd_val
    return largest_divisor
```