def gcd(a, b):
    a, b = abs(a), abs(b)
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos + 1)  
        start = pos + 1
    return indices