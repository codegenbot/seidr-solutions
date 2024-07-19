def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    last_index = 0
    while True:
        index = text.find(target, last_index)
        if index == -1:
            break
        result.append(index)
        last_index = index + 1
    return result


a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))