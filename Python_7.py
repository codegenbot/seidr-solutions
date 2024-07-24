from typing import List


def filter_by_substring():
    while True:
        try:
            num_strings = int(input("Enter number of strings: "))
            if num_strings < 1:
                print("Invalid input. Number of strings must be at least 1.")
                continue
            strings = [input(f"Enter string {i+1}: ") for i in range(num_strings)]
            substring = input("Enter the substring to search for: ")
            return [s for s in strings if substring in s]
        except ValueError:
            print("Invalid input. Please enter a number of strings and valid strings.")