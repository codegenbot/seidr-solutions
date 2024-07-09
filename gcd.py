def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")

def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text):
        if text[i:i+len(target)] == target:
            indices.append(i)
        i += 1
    return indices

print(indices_of_substring(text, target))