Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            end = i + len(target)
            while True:
                result.append(start)
                start += 1
                if start >= end:
                    break
    return result

# Test cases
print(gcd(1, 1))  # Expected output: 1
print(gcd(4, 400000))  # Expected output: 4
print(gcd(54, 24))  # Expected output: 6
print(gcd(4200, 3528))  # Expected output: 168
print(gcd(820000, 63550))  # Expected output: 2050