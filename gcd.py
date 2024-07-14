```
def gcd(a, b):
    if a == 0 and b == 0:
        return abs(a)
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        j = 0
        found = False
        while j < len(target):
            if text[i + j] != target[j]:
                found = False
                break
            found = True
            j += 1
        if found:
            result.append(i)
            i += 1
    return result