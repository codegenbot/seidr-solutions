Here is the Python solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while True:
        try:
            index = text.index(target)
            result.append(index)
            text = text[index + len(target):]
        except ValueError:
            break
    return result

# Testing the functions
print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))