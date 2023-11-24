import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

def solve():
    t = int(input())
    for _ in range(t):
        problem = input()
        if problem == "gcd":
            a = int(input())
            b = int(input())
            print(gcd(a, b))
        elif problem == "indices_of_substring":
            text = input()
            target = input()
            print(indices_of_substring(text, target))

solve()