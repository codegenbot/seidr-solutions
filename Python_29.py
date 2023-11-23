from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

strings = input().split()  # Replace with actual input provided by the code contest platform
prefix = input()  # Replace with actual input provided by the code contest platform

filtered_strings = filter_by_prefix(strings, prefix)

print(filtered_strings)