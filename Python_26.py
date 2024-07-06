from typing import List

def remove_duplicates():
    while True:
        numbers = input("Enter a list of space-separated numbers: ")
        try:
            return [int(num) for num in numbers.split()]
        except ValueError:
            print("Invalid input! Please enter a list of space-separated numbers.")