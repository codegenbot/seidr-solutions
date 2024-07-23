```
from typing import List


def all_prefixes(string: str) -> List[str]:
    prefixes = [""]
    for i in range(1, len(string) + 1):
        prefix = string[:i].lower()
        if any(c.isupper() and c != c.lower() for c in prefix):
            prefix = "".join(e if e.isupper() else e.lower() for e in string[:i])
        prefixes.append(prefix)
    return prefixes