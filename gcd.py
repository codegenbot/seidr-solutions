Here is the Python solution for the problem:

```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos + 1)
        start = pos + 1
    return indices

# test cases
print(gcd(54, 24))  
print(find_indices("Hello, Hello, hello", "ello"))