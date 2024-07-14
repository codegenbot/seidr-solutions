Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            j = 0
            while True:
                k = i + j
                if k >= len(text) or not text[k:].startswith(target):
                    break
                j += 1
            result.append(i)
    return result