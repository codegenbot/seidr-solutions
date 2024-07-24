```
from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

user_strings = input("Enter your list of strings (comma separated): ")
user_strings = user_strings.split(",")
user_strings = [x.strip() for x in user_strings]

user_prefix = input("Enter your prefix: ")

print(filter_by_prefix(user_strings, user_prefix))