def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        i += pos + len(target)
    return indices


# example usage
a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))