```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a) if b == 0 else b

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos + 1)
        start = pos + 1
    return result


print(gcd(1, 1))  
print(gcd(4, 400000))  
print(gcd(54, 24))  
print(gcd(4200, 3528))  
print(gcd(820000, 63550))