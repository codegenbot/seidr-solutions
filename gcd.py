Here is the Python code to solve the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def find_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices