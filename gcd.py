Here is the completed code:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result

# Test cases:
print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))