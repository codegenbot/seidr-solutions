```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    result = []
    start_index = 0
    if len(target) == 0 or not isinstance(text, str) or not isinstance(target, str):
        print("Invalid input")
        return
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
    print("Invalid input")
else:
    print(gcd(a, b))

text = input()
target = input()
print(indices_of_substring(text, target))