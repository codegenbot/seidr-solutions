```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i : i + len(target)] == target:
            j = i
            while True:
                if text[j:j+len(target)] != target: break
                result.append(j)
                j += 1

    return result

print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))