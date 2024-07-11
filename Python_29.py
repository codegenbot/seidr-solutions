from typing import List

def filter_by_prefix(strings: List[str], prefix: str) -> List[str]:
    return [s for s in strings if s.startswith(prefix)]

num_strings = int(input("Enter number of strings: "))
strings = [input() for _ in range(num_strings)]
prefix = input("Enter prefix: ")
filtered_strings = filter_by_prefix(strings, prefix)
print(filtered_strings)