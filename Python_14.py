from typing import List


def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]

input_string = input("Enter a string: ")
if input_string:
    result = all_prefixes(input_string)
    print(result)
else:
    print("Input string is empty. Please provide a valid input.")