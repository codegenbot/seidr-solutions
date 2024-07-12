'''
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    pos = 0
    while pos < len(text):
        found_pos = text.find(target, pos)
        if found_pos == -1:
            break
        result.append(found_pos)
        pos = found_pos + 1
    return result