```Python
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a = int(input())
b = int(input())

print(gcd(a, b))

def find_indices(text, target):
    indices = []
    index = 0
    while index < len(text):
        pos = text.find(target, index)
        if pos != -1:
            indices.append(pos)
            # Find all overlapping occurrences
            while index + len(target) <= len(text) and text[index:index+len(target)] == target:
                index += len(target)
            else:
                break
        else:
            break
    return indices

text = input()
target = input()

print(find_indices(text, target))