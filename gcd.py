def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    index = 0
    while True:
        index = text.find(target)
        if index == -1:
            break
        indices.append(index + 1)
        text = text[index + len(target) :]
    return indices


# Testing the functions
a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(find_indices(text, target))