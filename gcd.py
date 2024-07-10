def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text.startswith(target, i):
            result.append(i)
    return result

text, *_ = input("Enter text: ").split()
target, *_ = input("Enter target string: ").split()
print(*indices_of_substring(text, target))