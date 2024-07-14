import math

text = input("Enter the text: ")
target = input("Enter the target string: ")

def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        j = text.find(target, i)
        if j == -1:
            break
        indices.append(j + 1)
        i = j + 1
    return indices

print(f"Indices: {find_indices(text, target)}")
print(f"GCD: {math.gcd(int(input('Enter the first number: ')), int(input('Enter the second number: ')))}")