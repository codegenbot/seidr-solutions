from typing import List
import sys

def all_prefixes(string: str) -> List[str]:
    return [string[:i] for i in range(1, len(string) + 1)]

if len(sys.argv) != 2:
    print("Usage: python filename.py <input_string>")
    sys.exit(1)

input_string = sys.argv[1]
result = all_prefixes(input_string)
print(result)