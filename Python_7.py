from typing import List

def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [string for string in strings if substring in string]

num_strings = int(input("Enter the number of strings: "))
strings_input = [input("Enter a string: ") for _ in range(num_strings)]
substring = input("Enter a substring: ").strip()

result = filter_by_substring(strings_input, substring)

if result:
    print(f"The strings that contain '{substring}' are: {result}")
else:
    print(f"No strings contain the substring '{substring}'.")