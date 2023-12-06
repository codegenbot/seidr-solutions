
def gcd(a, b):
    while b != 0:
        if a < b:
            a, b = b, a
        a -= b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text) - len(target) + 1) if text[i:i+len(target)] == target]