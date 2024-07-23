```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            start = i
            while True:
                result.append(start)
                start += len(target)
                if start >= len(text) or not text[start:].startswith(target):
                    break
    return result


a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")
print(indices_of_substring(text, target))