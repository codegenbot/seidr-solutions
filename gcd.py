Here is the modified code:

```
def gcd(a, b):
    if b == 0: return abs(a)
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    pos = 0
    while True:
        pos = text.find(target, pos)
        if pos == -1:
            break
        result.append(pos)
        pos += len(target)
    return result