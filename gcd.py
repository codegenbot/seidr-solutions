[PYTHON]
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def find_indices(string, substring):
    indices = []
    for i in range(len(string)):
        if string[i:i+len(substring)] == substring:
            indices.append(i)
    return indices

def test_gcd():
    assert gcd(1, 1) == 1
    assert gcd(4, 400000) == 4
    assert gcd(54, 24) == 6
    assert gcd(4200, 3528) == 168
    assert gcd(820000, 63550) == 2050

def test_find_indices():
    assert find_indices("hello", "ll") == [2, 3]
    assert find_indices("hello", "llo") == [3, 4]
    assert find_indices("hello", "he") == [0, 1]
    assert find_indices("hello", "hel") == [0, 1, 2]

if __name__ == "__main__":
    test_gcd()
    test_find_indices()
[/PYTHON]
[TESTS]
# Test case 1:
assert gcd(1, 1) == 1
# Test case 2:
assert gcd(4, 400000) == 4
# Test case 3:
assert gcd(54, 24) == 6
# Test case 4:
assert gcd(4200, 3528) == 168
# Test case 5:
assert gcd(820000, 63550) == 2050
[/TESTS]
