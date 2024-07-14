Here is the Python solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices

# Test cases
print(gcd(1, 1))
print(find_indices("banana", "ana"))

print(gcd(4, 400000))
print(find_indices("hello world hello", "hello"))

print(gcd(54, 24))
print(find_indices("abcdefgabcdefg", "abc"))

print(gcd(4200, 3528))
print(find_indices("aabbccddaaabbbccc", "aab"))

print(gcd(820000, 63550))
print(find_indices("aaaaaaaabbbbbbbbcccccccc", "aaaa"))