```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    while start_index < len(text):
        pos = text.find(target, start_index)
        if pos != -1:
            result.append(pos)
            start_index = pos + 1
        else:
            break
    return result

a = int(input())
b = int(input())
text = input()
print(gcd(a, b))
print(indices_of_substring(text, text))