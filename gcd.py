def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    start = 0
    while start < len(text) - 1:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices


# Testing the functions
print(gcd(54, 24))  # Should print 6
print(find_indices("Hello World, this is a test", "is"))  # Should print [8, 15]