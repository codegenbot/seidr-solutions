import sys
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

if len(sys.argv) > 1:
    input_string = sys.argv[1]
    result = all_prefixes(input_string)
    print(result)
else:
    print("No input provided. Please provide a string as command line argument.")