Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while True:
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(index + pos)
        index += pos + len(target)
    return indices

# test cases
print(gcd(1, 1))  # 1
print(gcd(4, 400000))  # 4
print(gcd(54, 24))  # 6
print(gcd(4200, 3528))  # 168
print(gcd(820000, 63550))  # 2050