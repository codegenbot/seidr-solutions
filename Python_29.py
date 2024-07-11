```
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]


if __name__ == "__main__":
    user_input = input("Enter a list of strings separated by comma and a prefix: ")
    strings_list, prefix = user_input.split(", ")
    strings = [string.strip() for string in strings_list]
    
    filtered_strings = filter_by_prefix(strings, prefix)
    
    if not filtered_strings:
        print("No strings found with the given prefix.")
    else:
        print(f"Strings with the prefix '{prefix}': {', '.join(filtered_strings)}")