from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    for i in range(len(string)):
        prefixes.append(string[: i + 1])
    return prefixes


input_string = input("Enter a string: ")
result = all_prefixes(input_string)
print(result)