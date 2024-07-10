Here is the Python solution for the problem:

```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices

# test cases
print(gcd(1, 1)) 
print(find_indices("abcdef", "abc")) 
print(gcd(4, 400000))
print(find_indices("banana", "ana"))
print(gcd(54, 24))
print(find_indices("hellohellohello", "hello"))
print(gcd(4200, 3528))
print(find_indices("aabaabaa", "aab"))
print(gcd(820000, 63550))
print(find_indices("aaaaaaa", "aaaa"))