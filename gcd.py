try:
    a, b = map(int, input("Enter two integers (separated by space): ").split())
except ValueError:
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

print(gcd(a, b))

def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

text, target = input("Enter text and target string: ").split()
print(*indices_of_substring(text, target))

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result