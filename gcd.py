Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        indices.append(index + 1)
        index += len(target)
    return indices

# Test cases
print(gcd(1, 1))
print(find_indices("banana", "ana"))

print(gcd(4, 400000))
print(find_indices("hellohellohello", "hello"))

print(gcd(54, 24))
print(find_indices("abcdefgabcdefg", "abc"))

print(gcd(4200, 3528))
print(find_indices("abcdefghijklmnopqrstuvwxyz", "abcd"))

print(gcd(820000, 63550))
print(find_indices("a"*820000, "a"*63550))