```
while True:
    try:
        a = int(input())
        b = int(input())
        text = input()
        target = input()
        break
    except ValueError:
        print("Invalid input. Please enter valid integers and strings.")

print(gcd(a, b))

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def find_indices(text, target):
    indices = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        indices.append(pos)
        start = pos + 1
    return indices

print(find_indices(text, target))