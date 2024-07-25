import shlex
from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

result = longest(shlex.split(input("Please enter a list of strings separated by space. Each word should be enclosed in single or double quotes if it contains spaces: ")))
print(result)