def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    start_index = 0
    while True:
        start_index = text.find(target, start_index)
        if start_index == -1:
            break
        indices.append(start_index + 1)
        start_index += 1

    return indices

print(gcd(24, 54))
print(gcd(400000, 4))
print(gcd(3528, 4200))
print(gcd(63550, 820000))