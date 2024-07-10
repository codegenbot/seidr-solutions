Here is the completed code:

def gcd(m, n):
    while n:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(i + pos)
        i += pos + 1
    return result