```
import sys

if len(sys.argv) != 3:
    print("Usage: python program_name.py <num1> <num2>")
else:
    a, b = int(sys.argv[1]), int(sys.argv[2])
    print(gcd(a, b))
    text, target = sys.argv[1], sys.argv[2]
    print(indices_of_substring(text, target))



def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + 1
        else:
            break
    return result