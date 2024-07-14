```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        j = 0
        while j < len(target):
            if text[i + j] != target[j]:
                i = i - 1
                j = -1
                break
            j += 1
        if j == len(target):
            result.append(i)
        i += 1
    return result