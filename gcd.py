import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

# Test the gcd function
a = int(input())
b = int(input())
print(gcd(a, b))

# Test the indices_of_substring function
text = input()
target = input()
indices = indices_of_substring(text, target)
print(indices)