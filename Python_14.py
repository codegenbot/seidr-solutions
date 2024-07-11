from typing import List

def all_prefixes():
    while True:
        try:
            s = input("Please enter a string: ")
            break
        except ValueError:
            print("Invalid input! Please enter a valid string.")

    return [s[:i] for i in range(1, len(s) + 1)]

print(all_prefixes())