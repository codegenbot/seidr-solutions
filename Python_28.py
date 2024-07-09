from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


while True:
    try:
        strings = input("Enter strings (separated by space): ").split()
        print(concatenate(strings))
        break
    except ValueError:
        print("Invalid input. Please enter a set of strings separated by space.")