def gcd(a, b):
    if a == 0:
        return b
    elif b == 0:
        return a
    while b != 0:
        a, b = b, a % b
    return a


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))