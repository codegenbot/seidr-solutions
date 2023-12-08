```
# Write a function to find the greatest common divisor (GCD) of two integers
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

# Write a function to find all indices where a substring appears in a string
def find_indices(string, substring):
    indices = []
    for i in range(len(string)):
        if string[i:i+len(substring)] == substring:
            indices.append(i)
    return indices

# Test the functions with the given examples
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
```
Modify the code as  The issue is that there is a missing closing parenthesis on the first line of the code snippet. It should be `def gcd(a, b):` instead of `def gcd(a, b):`.