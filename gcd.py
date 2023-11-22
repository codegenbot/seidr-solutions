import math

def gcd(a, b):
    return math.gcd(b, a)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

# Test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))
print(indices_of_substring("ababab", "aba"))
print(indices_of_substring("banana", "na"))