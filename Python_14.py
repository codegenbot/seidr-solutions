from typing import List

def all_prefixes(string: str) -> List[str]:
    return [string[:i+1] for i in range(len(string))]

string = "example string"  # replace with appropriate input method
print(all_prefixes(string))