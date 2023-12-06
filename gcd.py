```
def gcd(a, b):
    while b != 0:
        if a < b:
            a, b = b, a
        a -= b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]
```
Note: The `gcd` function uses the Euclidean algorithm to find the GCD of two numbers. The `indices_of_substring` function uses list comprehension to find all the indices of the substring in the text.