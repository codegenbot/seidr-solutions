def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while True:
        pos = text.find(target, current_index)
        if pos == -1:
            break
        indices.append(pos)
        current_index = pos + 1
    return indices


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))