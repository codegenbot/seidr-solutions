from typing import List

def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring.lower() in s.lower()]

strings = input("Enter a list of strings (separated by commas): ")
while True:
    try:
        strings_list = [s.strip() for s in strings.split(',')]
        if len(strings_list) < 2 or any(x.strip() == '' for x in strings_list):
            print("Invalid input. Please enter a list of strings separated by commas.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a list of strings separated by commas.")

substring = input("Enter a substring to search for: ")
while True:
    try:
        substring = substring.strip()
        if not substring:
            print("Please enter a non-empty string as the substring to search for.")
        else:
            break
    except ValueError:
        print("Please enter a non-empty string as the substring to search for.")

result = filter_by_substring(strings_list, substring)
print(result)