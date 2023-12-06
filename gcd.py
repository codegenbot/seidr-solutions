def gcd(a, b):
    from math import gcd

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]