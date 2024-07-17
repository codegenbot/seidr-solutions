Here is the Python solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i:i+len(target)] == target:
            result.append(i)
            i += len(target)
        else:
            i += 1
    return result