```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

# test cases
print(gcd(1, 1))  # output: 1
print(gcd(4, 400000))  # output: 4
print(gcd(54, 24))  # output: 6
print(gcd(4200, 3528))  # output: 168
print(gcd(820000, 63550))  # output: 2050