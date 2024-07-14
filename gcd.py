import math


def gcd(first_number, second_number):
    return math.gcd(first_number, second_number)


def find_indices(text, target):
    indices = []
    i = 0
    while i < len(text):
        j = text.find(target, i)
        if j == -1:
            break
        indices.append(j + 1)
        i = j + 1
    return f"Indices: {indices}"


def main():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")

    first_number = int(input("Enter the first number: "))
    second_number = int(input("Enter the second number: "))

    print(find_indices(text, target))
    print(f"GCD: {gcd(first_number, second_number)}")


if __name__ == "__main__":
    main()