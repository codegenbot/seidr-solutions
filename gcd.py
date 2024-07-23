def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start_pos = 0
    while True:
        pos = text.find(target, start_pos)
        if pos != -1:
            result.append(pos)
            start_pos = pos + 1
        else:
            break
    return result


a = int(input())
b = int(input())
print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))