Here is the completed code for the problem:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        start_index = text.find(target, start_index)
        if start_index == -1:
            break
        result.append(start_index)
        start_index += 1

    return result