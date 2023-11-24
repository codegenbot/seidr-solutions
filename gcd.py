from math import gcd

def indices_of_substring(text, target):
    indices = []
    start = 0
    while True:
        index = text.find(target, start)
        if index == -1:
            break
        indices.append(index)
        start = index + 1
    return indices

inputs = input().split()

if len(inputs) >= 2:
    try:
        a = int(inputs[0])
        b = int(inputs[1])
        print(gcd(a, b))
    except ValueError:
        print("Please provide two integers as input.")
else:
    print("Please provide two integers as input.")

text = input()
target = input()
print(indices_of_substring(text, target))