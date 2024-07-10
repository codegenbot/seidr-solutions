def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)

a, b = map(int, input("Enter two integers (separated by space): ").split())
print(gcd(a, b))

def indices_of_substring(text, target):
    result = []
    current_index = 0
    while True:
        found_index = text.find(target, current_index)
        if found_index == -1:
            break
        result.append(found_index + 1)
        current_index = found_index + 1
    return result

text, *_ = input("Enter text: ").split()
target, *_ = input("Enter target string: ").split()
print(*indices_of_substring(text, target))