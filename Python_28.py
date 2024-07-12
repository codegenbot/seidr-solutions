from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(strings)


user_input = input("Enter multiple strings separated by space or comma (e.g., 'Hello' 'World'): ")

strings_list = [i.strip() for i in user_input.split()]

result = concatenate(strings_list)

print(result)