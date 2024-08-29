def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while True:
        try:
            index = text.index(target, index)
            result.append(index)
            index += len(target)
        except ValueError:
            break
    return result


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))