Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while True:
        index = text.find(target, index)
        if index == -1:
            break
        result.append(index + 1)
        index += len(target)
    return result