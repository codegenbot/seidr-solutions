Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos == -1:
            break
        result.append(pos + 1)
        index = pos + 1
    return result