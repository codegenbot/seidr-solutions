```
def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)

def indices_of_substring(text, target):
    if not target or len(target) == 0:
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

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
if a < 0 or b < 0:
    print("Please enter positive numbers.")
else:
    print(gcd(a, b))

text = input("Enter the text: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))