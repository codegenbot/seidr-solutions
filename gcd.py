import math

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text.startswith(target, i)]

# Test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))
print(indices_of_substring("ababab", "aba"))
print(indices_of_substring("banana", "na"))