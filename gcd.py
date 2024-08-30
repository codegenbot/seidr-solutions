def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
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
print(f"GCD of {a} and {b} is {gcd(a, b)}")

text = input("Enter the text: ")
target = input("Enter the target: ")
print(f"Indices of '{target}' in '{text}' are {indices_of_substring(text, target)}")