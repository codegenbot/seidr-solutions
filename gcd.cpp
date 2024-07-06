[PYTHON]
def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)

def indicesOfSubstring(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + len(target)
        else:
            break
    return indices
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(2, 8) == 2
# Test case 2:
assert gcd(12, 15) == 3
# Test case 3:
assert gcd(10, 17) == 1
[/TESTS]
