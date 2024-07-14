import math


def main():
    text = input("Enter the text: ")
    target = input("Enter the target string: ")

    indices = []
    i = 0
    while i < len(text):
        j = text.find(target, i)
        if j == -1:
            break
        indices.append(j + 1)
        i = j + 1
    print(f"Indices: {indices}")

    first_number = int(input("Enter the first number: "))
    second_number = int(input("Enter the second number: "))
    print(f"GCD: {math.gcd(first_number, second_number)}")


if __name__ == "__main__":
    main()