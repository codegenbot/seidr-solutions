```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start_index = 0
    while start_index < len(text) - len(target) + 1:
        index = text.find(target, start_index)
        if index != -1:
            indices.append(index)
            start_index = index + 1
        else:
            break
    return indices

# input
a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))