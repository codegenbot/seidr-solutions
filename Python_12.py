from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

strings_input = input("Enter a list of strings (comma-separated): ")
while True:
    try:
        strings_list = [string.strip() for string in strings_input.split(",")]
        break
    except ValueError:
        print("Invalid input. Please enter a comma-separated list of strings.")
        strings_input = input("Try again: ")

result = longest(strings_list)
print(f"The longest string is: {result}")