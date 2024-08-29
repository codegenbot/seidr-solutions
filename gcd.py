```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    i = 0
    while i <= len(text) - len(target):
        if text[i:i+len(target)] == target:
            j = 0
            while True:
                if target[j:] != target[:len(target)-j]:
                    result.append(i)
                    break
                j += 1
        i += 1
    return result


# test cases
print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))