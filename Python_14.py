```
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = [""]
    for char in string:
        result = [str(i) + j for i in range(len(char)) for j in char]
    return result

print(all_prefixes("abc"))