from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(1, len(string) + 1):
        prefixes.append(string[:i])
    return prefixes


string_input = input("Enter a string: ")
prefixes = all_prefixes(string_input)
print("All prefixes of the string:", prefixes)