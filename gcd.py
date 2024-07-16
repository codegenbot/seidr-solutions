```
import math

def gcd(a, b):
    return abs(math.gcd(a, b))

def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += 1
    return result