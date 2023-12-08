[PYTHON]
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(12, 15) == 3
# Test case 2:
assert gcd(10, 17) == 1
# Test case 3:
assert indices_of_substring("banana", "na") == [2, 4]
# Test case 4:
assert indices_of_substring("banana", "an") == [1, 3]
# Test case 5:
assert indices_of_substring("banana", "a") == [1, 4]
[/TESTS]
