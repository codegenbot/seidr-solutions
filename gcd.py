Here is the Python solution for the problem:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    i = 0
    while i < len(text):
        pos = text.find(target)
        if pos == -1:
            break
        result.append(i + pos)
        i += pos + 1
    return result

# test cases
print(gcd(1, 1)) # output: 1
print(gcd(4, 400000)) # output: 4
print(gcd(54, 24)) # output: 6
print(gcd(4200, 3528)) # output: 168
print(gcd(820000, 63550)) # output: 2050