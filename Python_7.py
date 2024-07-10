```python
from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s and s.strip()]


strings = []
while True:
    user_input = input("Enter the list of strings (comma separated): ")
    try:
        strings = [x.strip() for x in user_input.split(",")]
        break
    except ValueError:
        print("Invalid input. Please enter a comma-separated list of strings.")

substring = ""
while True:
    user_input = input("Enter the substring to filter by: ")
    if not user_input:
        continue
    try:
        substring = user_input.strip()
        break
    except AttributeError:
        print("Invalid input. Please enter a string.")

print(filter_by_substring(strings, substring))