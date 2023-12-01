from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


# Read input from user
strings = input("Enter the list of strings: ").split()
prefix = input("Enter the prefix: ")

# Call the function with the inputs
result = filter_by_prefix(strings, prefix)

# Print the result
print(result)