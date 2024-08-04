def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(pos + 1)
        index += pos + len(target)
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))