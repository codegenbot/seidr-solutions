Here is the completed code:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = i
            while True:
                j += len(target)
                if not text[j:].startswith(target):
                    break
                result.append(j)
    return result