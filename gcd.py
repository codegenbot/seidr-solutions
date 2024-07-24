```
while True:
    try:
        a = int(input())
        b = int(input())
        break
    except ValueError:
        print("Invalid input. Please enter integers.")

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

print(gcd(a, b))

text = input()
target = input()

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                result.append(start)
                start += len(target)
                if text[start:] != target:
                    break
    return result

print(indices_of_substring(text, target))