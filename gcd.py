```
a = int(input("Enter number 1: "))
b = int(input("Enter number 2: "))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

print(gcd(a, b))


text = input("Enter text: ")
target = input("Enter target string: ")

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            while True:
                idx = text.find(target, i)
                if idx == -1:
                    break
                result.append(idx)
                i = idx + 1
    return result

print(indices_of_substring(text, target))