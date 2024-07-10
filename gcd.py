```
def gcd(a, b):
    while b != 0:
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

print(gcd(1, 1))  
print(gcd(4, 400000))  
print(gcd(54, 24))  
print(gcd(4200, 3528))  
print(gcd(820000, 63550))