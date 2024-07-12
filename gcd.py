```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos)
        start = pos + 1
    return result

# Test cases
print(gcd(1, 1))  
print(gcd(4, 400000))  
print(gcd(54, 24))  
print(gcd(4200, 3528))  
print(gcd(820000, 63550))