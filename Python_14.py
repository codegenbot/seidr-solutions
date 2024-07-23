from typing import List


def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i] for i in range(1, len(string) + 1)]


user_string = input("Enter a string: ").lower()
print(all_prefixes(user_string))

user_string = input("Enter a string: ").upper()
print(all_prefixes(user_string))