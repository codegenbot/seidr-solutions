[PYTHON]
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    prev_indices = {}
    for i, c in enumerate(text):
        if c == target[0]:
            if text[i:i+len(target)] == target:
                prev_indices[i] = 1
    return list(prev_indices.keys())
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(10, 15) == 5
# Test case 2:
assert gcd(10, 20) == 10
# Test case 3:
assert gcd(10, 25) == 5
[/TESTS]
