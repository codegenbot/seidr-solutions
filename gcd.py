Here is the completed code:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices