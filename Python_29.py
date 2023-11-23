from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return sorted({string for string in strings if string.startswith(prefix)})


n = int(input("Enter the number of strings: "))
strings = [input(f"Enter string #{i+1}: ") for i in range(n)]
prefix = input("Enter the prefix: ")

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)