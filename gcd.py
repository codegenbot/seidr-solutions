Here is the Python code for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos + 1)
        pos += len(target)
    return result

print(gcd(int(input()), int(input())))
print(indices_of_substring(input(), input()))