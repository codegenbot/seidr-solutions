```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")

def indices_of_substring(text, target):
    indexes = []
    index = 0
    while True:
        pos = text.find(target, index)
        if pos == -1:
            break
        indexes.append(pos)
        index = pos + 1
    return indexes

print(indices_of_substring(text, target))