```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a


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


print(gcd(54, 24))  
print(find_indices("banana", "ana"))