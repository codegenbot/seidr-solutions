from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []

    for i in range(len(string)):
        prefixes.append(string[: i + 1])

    return prefixes


# Read input from user
string = input()

# Call the function and print the result
result = all_prefixes(string)
print(result)