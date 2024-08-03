Here is the completed code for the GCD and Indices of Substring problems:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(index + pos)
        index += pos + 1
    return result