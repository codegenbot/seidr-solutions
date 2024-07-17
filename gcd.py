def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    last_index = 0
    while len(target) <= len(text):
        index = text.find(target)
        if index != -1 and index >= last_index:
            result.append(index)
            last_index = index + len(target)
        else:
            break
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))