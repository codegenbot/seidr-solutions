```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices

# Test cases
print(gcd(1, 1))  # Output: 1
print(gcd(4, 400000))  # Output: 4
print(gcd(54, 24))  # Output: 6
print(gcd(4200, 3528))  # Output: 168
print(gcd(820000, 63550))  # Output: 2050