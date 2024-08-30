```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    if not target:
        return []
    result = []
    start_index = 0
    while True:
        pos = text.find(target, start_index)
        if pos == -1:
            break
        result.append(pos + 1)
        start_index = pos + 1
    return result

a = int(input())
b = int(input())

if a < 0 or b < 0:
    print("Both numbers should be positive.")
else:
    print(gcd(a, b))

text = input()
target = input()

if not target:
    print("Target string cannot be empty and has at least one character.")
else:
    print(indices_of_substring(text, target))