```
import math

def gcd(a, b):
    return math.gcd(a, b)

def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos == -1:
            break
        start = pos + len(target)
        result.append(pos)
    return result

print(gcd(182041, 626624))
print(indices_of_substring("HelloWorld", "o"))