def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]