import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

def solve():
    num_cases = int(input())
    
    for _ in range(num_cases):
        problem_type = int(input())
        if problem_type == 1:
            a = int(input())
            b = int(input())
            print(gcd(a, b))
        else:
            text = input()
            target = input()
            print(indices_of_substring(text, target))

solve()