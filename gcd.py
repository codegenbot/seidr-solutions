def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    index = 0
    while True:
        try:
            index = text.index(target, index)
            indices.append(index)
            index += len(target)
        except ValueError:
            break
    return indices


a = int(input())
b = int(input())
print(gcd(a, b))