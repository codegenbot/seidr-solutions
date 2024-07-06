```
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

    while True:
        threshold = float(input("Enter a number to determine close elements: "))
        if 0 < threshold:
            break
        else:
            print("Please enter a positive number for the threshold.")

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
        while True:
            threshold = float(input("Enter a number to determine close elements: "))
            if 0 < threshold:
                break
            else:
                print("Please enter a positive number for the threshold.")

        found_close_elements = False

        for i in range(len(numbers)):
            for j in range(i + 1, len(numbers)):
                if abs(numbers[i] - numbers[j]) <= threshold:
                    found_close_elements = True
                    break

        cont = input("Do you want to check another set of numbers? (y/n): ")
    if found_close_elements:
        print("Close elements found!")
    else:
        print("No close elements found.")