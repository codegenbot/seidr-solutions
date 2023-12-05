[PYTHON]
def gcd(a, b):
    if a == 0 or b == 0:
        return 0
    while b != 0:
        if b > a:
            b = b - a
        else:
            a = a - b
    return a

def indicesOfSubstring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(1200, 60000) == 6
# Test case 2:
assert indicesOfSubstring("Hello World", "World") == [5]
# Test case 3:
assert gcd(1200, 60000) == 6
# Test case 4:
assert indicesOfSubstring("Hello World", "World") == [5]
[/TESTS]
