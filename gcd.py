def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def indices_of_substring(text, target):
    indices = []
    for i in range(len(text) - len(target) + 1):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

inputs = input().split()
if len(inputs) >= 2:
    a, b = map(int, inputs)
    print(gcd(a, b))
else:
    print("Please provide two integers as input.")

text = input()
target = input()
print(indices_of_substring(text, target))