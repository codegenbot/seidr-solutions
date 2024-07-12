def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    target_length = len(target)
    for i in range(len(text) - target_length + 1):
        if text[i : i + target_length] == target:
            result.append(i)
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))