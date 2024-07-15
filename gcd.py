def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            result.append(i)
    return result


m = int(input())
n = int(input())
print(gcd(m, n))

text = input()
target = input()
print(indices_of_substring(text, target))