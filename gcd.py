def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            j = 0
            while True:
                k = i + j
                if k + len(target) > len(text):
                    break
                if text[k:k+len(target)] != target:
                    break
                result.append(k)
                j += 1