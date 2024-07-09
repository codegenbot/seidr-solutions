def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        pos = text.find(target, i)
        if pos != -1:
            indices.append(pos)
            i = pos + 1
        else:
            break
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))