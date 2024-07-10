def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    i = 0
    while i <= len(text) - len(target):
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += len(target)
        else:
            i += 1
    return indices


num1 = int(input())
num2 = int(input())

print(gcd(num1, num2))

text = input()
target = input()

print(find_indices(text, target))