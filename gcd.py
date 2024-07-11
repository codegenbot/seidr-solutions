Here is the completed code:

def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    indices = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(target, start_index)
        if pos != -1:
            indices.append(pos)
            start_index = pos + 1
        else:
            break
    return indices