```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    indices = []
    current_index = 0
    while True:
        pos = text.find(target, current_index)
        if pos == -1:
            break
        indices.append(pos)
        current_index = pos + 1
    return indices

while True:
    try:
        a = int(input())
        b = int(input())
        print(gcd(a, b))
        text = input()
        target = input()
        print(indices_of_substring(text, target))
        break
    except ValueError:
        print("Invalid input. Please enter two integers for gcd and a text string and a target string for indices_of_substring.")