from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

num_strings = int(input("Please enter the number of strings: "))
strings = []
for _ in range(num_strings):
    strings.append(input("Please enter a string: "))

substring = input("Please enter the substring to filter by: ")

if not strings or not substring:
    print("Incorrect input. Please provide both a list of strings and a substring.")
else:
    result = filter_by_substring(strings, substring)
    if result:
        print(f"The strings that contain '{substring}' are: {result}")
    else:
        print(f"No strings contain the substring '{substring}'.")