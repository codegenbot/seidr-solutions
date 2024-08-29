def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos + 1)
        start = pos + 1
    return indices


first_num = int(input())
second_num = int(input())

print(gcd(first_num, second_num))

text = input()
target = input()

print(find_indices(text, target))