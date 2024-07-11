Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        result.append(pos + 1)
        start = pos + 1
    return result

# Testing the functions
print(gcd(1, 1))
print(indices_of_substring('HelloWorldHello', 'ello'))