from typing import List


def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i].lower() for i in range(1, len(string) + 1)]


user_input = input("Enter a string: ")
print(all_prefixes(user_input.lower()))
print(all_prefixes(user_input.upper()))