```
import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result