```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        indices.append(pos + 1)  
        i += pos + 1
    return indices