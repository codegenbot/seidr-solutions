```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a
```
The `gcd` function takes two integers as input and returns their greatest common divisor using the Euclidean algorithm. The `indices_of_substring` function takes a text string and a target string as input and returns a list of indices where the target string appears in the text string. If the target string overlaps itself in the text, all indices (including those overlapping) should be returned.

Note: The code is written in Python and assumes that both functions are defined in the same scope.