[PYTHON]
def gcd(a, b):
    if a == 0:
        return b
    return gcd(b % a, a)

def indicesOfSubstring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(10, 15) == 5
# Test case 2:
assert gcd(10, 20) == 10
# Test case 3:
assert gcd(10, 25) == 5
[/TESTS]
