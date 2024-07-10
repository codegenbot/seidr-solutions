def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                idx = text.find(target, i)
                if idx == -1:
                    break
                result.append(idx)
                i = idx + 1
    return result


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))