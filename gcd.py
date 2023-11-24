import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

# Read input from user
a = int(input())
b = int(input())

# Call gcd function and print the result
print(gcd(a, b))

# Read input from user
text = input()
target = input()

# Call indices_of_substring function and print the result
print(indices_of_substring(text, target))