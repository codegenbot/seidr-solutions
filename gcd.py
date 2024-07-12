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

a, b = map(int, input().split())
print(gcd(a, b))

text, target = input().split()
print(indices_of_substring(text, target))