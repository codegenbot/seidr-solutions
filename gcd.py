```Python
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
    indices = []
    pos = 0
    while pos < len(text):
        pos = text.find(target, pos)
        if pos == -1:
            break
        indices.append(pos)
        pos += 1
    return indices

print(indices_of_substring(text, target))