def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result


n = int(input())
m = int(input())

print(gcd(n, m))

text = input()
target = input()

print(indices_of_substring(text, target))