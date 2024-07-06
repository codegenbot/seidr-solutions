```
from typing import List

def all_prefixes(string: str) -> List[str]:
    result = []
    for i in range(len(string) + 1):
        if i > 0:
            result.append(string[:i])
    return result

user_string = input()
print(all_prefixes(user_string))