def gcd(a, b):
    while b:
        a, b = b, a % b
    return abs(a)


a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(gcd(a, b))

text = input("Enter the text string: ")
target = input("Enter the target string: ")


def indices_of_substring(text, target):
    start_index = 0
    indices = []
    while True:
        start_index = text.find(target, start_index)
        if start_index == -1:
            break
        indices.append(start_index + 1)
        start_index += 1
    return indices


print(indices_of_substring(text, target))