def gcd(m, n):
    while n != 0:
        m, n = n, m % n
    return abs(m)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            result.append(i)
    return result