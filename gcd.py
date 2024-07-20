def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        if text[index : index + len(target)] == target:
            result.append(index)
            index += len(target)
        else:
            index += 1
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))