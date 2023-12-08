[PYTHON]
def gcd(a, b):
    if a < 0 and b < 0:
        return -1 * gcd(-a, -b)

    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = set()
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.add(i)
    return list(indices)
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(10, 15) == 5
# Test case 2:
assert gcd(-10, -15) == -5
# Test case 3:
assert indices_of_substring("hello", "ll") == [2, 3]
# Test case 4:
assert indices_of_substring("hello", "llo") == [3, 4]
# Test case 5:
assert indices_of_substring("hello", "he") == [0, 1]
[/TESTS]
