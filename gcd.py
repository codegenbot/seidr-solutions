def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def find_indices(text, target):
    indices = []
    start = 0
    while start < len(text):
        pos = text.find(target, start)
        if pos != -1:
            indices.append(pos)
            start = pos + 1
        else:
            break
    return indices


a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

print(gcd(a, b))


text = input("Enter the text: ")
target = input("Enter the target string: ")

print(find_indices(text, target))