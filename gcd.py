Here is the Python solution for the problem:

def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos != -1:
            indices.append(pos + i)
            i += pos + len(target)
        else:
            break
    return indices

m = int(input())
n = int(input())

print(gcd(m, n))

text = input()
target = input()

print(indices_of_substring(text, target))