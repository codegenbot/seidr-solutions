import math

def gcd(a, b):
    if a == 0:
        return b
    if b == 0:
        return a
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

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))