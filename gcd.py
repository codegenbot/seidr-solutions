Here is the solution:

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    last_index = -1
    while True:
        index = text.find(target, last_index + 1)
        if index == -1:
            break
        result.append(index)
        last_index = index
    return result

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(indices_of_substring(text, target))