Here is the solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        current_index = text.find(target, current_index)
        if current_index == -1:
            break
        result.append(current_index + 1)
        current_index += 1

    return result