```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = i
            while True:
                if text[j:j+len(target)] != target:
                    break
                result.append(j)
                j += 1
    return result