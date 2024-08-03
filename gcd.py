Here is the solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text) - len(target) + 1:
        index = text.find(target, start)
        if index != -1:
            indices.append(index)
            start = index + 1
        else:
            break
    return indices

a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))