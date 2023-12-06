
def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)

def indices_of_substring(text, target):
    return [i for i in range(len(text)) if text[i:i+len(target)] == target]