```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(target, start_index)
        if pos == -1:
            break
        result.append(pos + 1)
        start_index = pos + 1
    return result

a = int(input())
b = int(input())
print(gcd(a, b))
print(*indices_of_substring(input(), input()), sep='\n')