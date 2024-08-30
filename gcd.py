def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while current_index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)
        current_index = pos + 1
    return indices


print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))