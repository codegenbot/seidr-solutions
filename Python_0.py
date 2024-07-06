from typing import List


def has_close_elements() -> bool:
    found_close_elements = False
    while True:
        numbers = input("Enter space-separated numbers: ")
        try:
            numbers = [float(num) for num in numbers.split()]
            break
        except ValueError:
            print("Invalid input! Please enter numeric values separated by spaces.")

    threshold = float(input("Enter a number to determine close elements: "))
    while threshold <= 0:
        print("Please enter a positive number for the threshold.")
        threshold = float(input("Enter a number to determine close elements: "))

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                found_close_elements = True
                break

    cont = input("Do you want to check another set of numbers? (y/n): ")
    while cont.lower() != "n":
        numbers = input("Enter space-separated numbers: ")
        try:
            numbers = [float(num) for num in numbers.split()]
        except ValueError:
            print("Invalid input! Please enter numeric values separated by spaces.")

        threshold = float(input("Enter a number to determine close elements: "))
        while threshold <= 0:
            print("Please enter a positive number for the threshold.")
            threshold = float(input("Enter a number to determine close elements: "))

        found_close_elements = False

        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) <= threshold:
                    found_close_elements = True
                    break

        cont = input("Do you want to check another set of numbers? (y/n): ")

    return found_close_elements