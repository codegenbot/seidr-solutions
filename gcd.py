def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return abs(a)


def indices_of_substring(text, target):
    indices = []
    i = 0
    while i < len(text) - len(target) + 1:
        if text[i : i + len(target)] == target:
            indices.append(i)
            i += 1
        else:
            i += 1
    return indices


def main():
    try:
        a = int(input("Enter first number: "))
        b = int(input("Enter second number: "))
        print(gcd(a, b))

        text = input("Enter the text: ")
        target = input("Enter the target substring: ")
        print(indices_of_substring(text, target))
    except ValueError:
        print("Invalid input. Please enter a valid integer.")