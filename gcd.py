Here is the solution:

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos != -1:
            result.append(pos)
            index = pos + 1
        else:
            break
    return result

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))