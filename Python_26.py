from typing import List


def remove_duplicates():
    numbers = []
    while True:
        num = input("Enter a number (or 'stop' to finish): ")
        if num.lower() == 'stop':
            break
        try:
            numbers.append(int(num))
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return list(set(numbers))

print(remove_duplicates())