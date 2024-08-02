Here is the completed code:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index + 1)
        index += len(target)
    return result

# Test cases:
print(gcd(1, 1))  # Output: 1
print(gcd(4, 400000))  # Output: 4
print(gcd(54, 24))  # Output: 6
print(gcd(4200, 3528))  # Output: 168
print(gcd(820000, 63550))  # Output: 2050