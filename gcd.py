Here is the solution for the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        i += pos + 1
    return indices

# Test the code
a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(find_indices(text, target))