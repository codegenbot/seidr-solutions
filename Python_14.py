from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = []
    prefixes.append(string)
    for i in range(1, len(string)):
        prefixes.append(string[:i])
    return prefixes


# Read input from the user
input_string = input()

# Call the function with the input string
result = all_prefixes(input_string)

# Return the result
print(result)