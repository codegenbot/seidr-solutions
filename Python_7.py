from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]

strings = None
while True:
    input_strings = input("Enter a list of strings (separated by commas): ")
    try:
        strings = [s.strip() for s in input_strings.split(",")]
        break
    except ValueError:
        print("Invalid input. Please enter a list of strings separated by commas.")

substring = None
while True:
    sub_input = input("Enter a substring to search for: ")
    if not isinstance(sub_input, str):
        print("Invalid input. Please enter a string.")
    else:
        substring = sub_input.strip()
        break

result = filter_by_substring(strings, substring)
print(result)