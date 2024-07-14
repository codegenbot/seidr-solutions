```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while True:
        current_index = text.find(target, current_index)
        if current_index == -1:
            break
        indices.append(current_index + 1)
        current_index += len(target)
    return indices

a = int(input())
b = int(input())
print(gcd(a, b))
print(*indices_of_substring(input(), input()), sep='\n')