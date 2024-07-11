from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

try:
    input_string = raw_input().strip()
    result = all_prefixes(input_string)
    print(result)
except EOFError:
    pass