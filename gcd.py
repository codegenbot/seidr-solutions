def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i : i + len(target)] == target:
            result.append(i)
    return result


a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

text, target = input("Enter text and target string (separated by space): ").split()
print(*indices_of_substring(text, target))