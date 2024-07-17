def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                start = text.find(target, start)
                if start == -1:
                    break
                indices.append(start)
                start += len(target)
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))