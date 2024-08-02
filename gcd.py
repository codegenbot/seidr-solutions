def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text) - len(target) + 1:
        if text[start : start + len(target)] == target:
            result.append(start)
            start += 1
        else:
            start += 1
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))