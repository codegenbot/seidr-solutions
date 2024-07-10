```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while True:
        start_index = text.find(target, start_index)
        if start_index == -1:
            break
        result.append(start_index + 1)
        start_index += 1

    return result

# Test cases
print(gcd(1, 1))
print(gcd(4, 400000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))