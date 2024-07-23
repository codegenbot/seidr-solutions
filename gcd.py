```
def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    start = 0
    while True:
        pos = text.find(target, start)
        if pos != -1:
            result.append(pos)
            start = pos + len(target)
        else:
            break
    return result


a = int(input("Enter number for GCD: "))
b = int(input("Enter number for GCD: "))

print(gcd(a, b))


text = input("Enter text string: ")
target = input("Enter target string: ")

print(indices_of_substring(text, target))