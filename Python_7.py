```
from typing import List

def filter_by_substring():
    strings = []
    while True:
        try:
            substring = str(input("Enter a substring: "))
            break
        except ValueError:
            print("Invalid input! Please enter a string.")
    
    while True:
        try:
            num_strings = int(input("How many strings do you want to filter? "))
            if num_strings > 0:
                break
            else:
                print("Number of strings should be positive.")
        except ValueError:
            print("Invalid input! Please enter a positive integer.")
    
    while len(strings) < num_strings:
        try:
            string = str(input(f"Enter string {len(strings)+1}: "))
            strings.append(string)
        except ValueError:
            print("Invalid input! Please enter a string.")

    substring_list = [s for s in strings if substring in s]
    return substring_list

print(filter_by_substring())