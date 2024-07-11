from typing import List


def concatenate(strings: List[str]) -> str:
    if not strings:
        return ""
    return "".join(s for s in strings if s)


user_input = input("Please enter some strings (comma-separated): ")

strings_list = [s.strip() for s in user_input.split(",")]

print(concatenate(strings_list))