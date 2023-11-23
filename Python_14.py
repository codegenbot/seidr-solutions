from typing import List
import sys


def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]


if len(sys.argv) > 1:
    input_string = sys.argv[1]
else:
    input_string = input("Enter a string: ")

result = all_prefixes(input_string)
print(result)