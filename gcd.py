```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    current_index = 0
    while True:
        current_index = text.find(target, current_index)
        if current_index == -1:
            break
        indices.append(current_index)
        current_index += len(target)
    return indices

a = int(input())
b = int(input())

print(gcd(a, b))

text = input()
target = input()

print(find_indices(text, target))