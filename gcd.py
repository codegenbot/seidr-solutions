def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

a, b = map(int, input().strip().split())
result = gcd(a, b)
print(result)

text, target = input().strip().split()

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            indices.append(i)
    return indices

indices_result = indices_of_substring(text, target)
print(indices_result)