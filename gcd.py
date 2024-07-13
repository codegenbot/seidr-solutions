def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        i += 1
        text = text[pos + 1 :]
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))
text = input()
target = input()
print(indices_of_substring(text, target))