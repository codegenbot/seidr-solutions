def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(target, start_index)
        if pos == -1:
            break
        indices.append(pos)
        start_index = pos + 1
    return indices


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))