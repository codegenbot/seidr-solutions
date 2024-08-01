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
                if not text[k:k+len(target)].startswith(target):
                    break
                j += 1
            result.append(i)
    return result