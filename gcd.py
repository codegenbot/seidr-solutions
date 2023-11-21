import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while True:
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1
    return indices

# Read input from user
a = int(input())
b = int(input())

# Call the gcd function and print the result
print(gcd(a, b))

# Read input from user
text = input()
target = input()

# Call the indices_of_substring function and print the result
print(indices_of_substring(text, target))