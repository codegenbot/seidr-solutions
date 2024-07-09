```Python
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target, i): 
            j = 0
            while True:
                j = text.find(target, i + j)
                if j == -1: break
                result.append(i+j)
                i += j+1
    return result