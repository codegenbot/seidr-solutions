def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    last_index = -1
    while True:
        last_index = text.find(target, last_index + 1)
        if last_index == -1:
            break
        result.append(last_index)
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))