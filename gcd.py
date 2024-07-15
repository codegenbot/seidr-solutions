def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    last_index = -1
    while True:
        start = text.find(target, last_index + 1)
        if start == -1:
            break
        indices.append(start)
        last_index = start
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))