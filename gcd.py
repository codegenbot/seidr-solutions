Here is the completed code:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                start += len(target)
                if not text[start:].startswith(target):
                    break
            result.append(start - len(target))
    return result