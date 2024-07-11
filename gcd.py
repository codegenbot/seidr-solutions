def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)


def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        j = text.find(target, i)
        if j == -1:
            break
        result.append(j)
        i = j + 1
    return result


m = int(input())
n = int(input())
print(gcd(m, n))

text = input()
target = input()
print(indices_of_substring(text, target))