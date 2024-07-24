from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


while True:
    try:
        strings = input("Enter a list of strings (space separated): ")
        strings = [i.strip() for i in strings.split()]
        break
    except ValueError:
        print("Invalid input. Please enter space-separated strings.")

while True:
    try:
        substring = input("Enter the substring to search for: ")
        break
    except ValueError:
        print("Invalid input. Please enter a valid string.")

result = filter_by_substring(strings, substring)

print(result)