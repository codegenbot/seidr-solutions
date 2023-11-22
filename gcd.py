import math
import re

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = [m.start() for m in re.finditer(target, text)]
    return indices

print(gcd(858467, 24673))
print(indices_of_substring('Hello World!', 'o'))