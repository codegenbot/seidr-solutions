def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start_idx = 0
    while True:
        idx = text.find(target, start_idx)
        if idx == -1:
            break
        result.append(idx)
        start_idx = idx + 1
    return result


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))