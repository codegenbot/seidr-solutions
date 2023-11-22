from typing import List
import sys

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

string = sys.argv[1]
prefixes = all_prefixes(string)
print(prefixes)