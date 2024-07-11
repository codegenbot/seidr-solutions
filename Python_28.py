```Python
from typing import List


def concatenate(strings: List[str]) -> str:
    return "".join(s for s in strings if s)


# Test cases
print(concatenate(["hello", "world"]))  
print(concatenate(["", " ", ""])) 
print(concatenate(["1", "2", "3"]))