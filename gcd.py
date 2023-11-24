from math import gcd

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

a, b = map(int, input().split())
print(gcd(a, b))

text = ""
target = ""
text = input().strip()
target = input().strip()
print(indices_of_substring(text, target))