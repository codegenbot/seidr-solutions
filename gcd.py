```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target):
            j = 0
            while True:
                k = text.find(target, i + j)
                if k == -1:
                    break
                result.append(k)
                j += k + len(target)
    return result


print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))