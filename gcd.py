Here is the completed code:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    index = 0
    while True:
        index = text.find(target)
        if index == -1:
            break
        indices.append(index + 1)
        text = text[index+1:]
    return indices

# Testing the code
print(gcd(1, 1))
print(gcd(4, 4000000))
print(gcd(54, 24))
print(gcd(4200, 3528))
print(gcd(820000, 63550))