```
import math


def gcd(first_number, second_number):
    while second_number:
        first_number, second_number = second_number, first_number % second_number
    return abs(first_number)


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
    print("Please enter the two numbers separated by a space or newline: ")
    input_str = input()
    nums = [int(num) for num in input_str.split()]
    first_number, second_number = nums
    print(find_indices(text, target))
    print(f"GCD: {gcd(first_number, second_number)}")


if __name__ == "__main__":
    main()