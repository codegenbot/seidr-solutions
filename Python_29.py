from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input("Enter strings separated by comma: ").rstrip().split(",")
prefix = input("Enter prefix: ").rstrip()

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)