```
from typing import List

def all_prefixes():
    s = input("Enter a string: ")
    prefixes = [""]
    for i in range(len(s)):
        prefix = s[:i+1]
        prefixes.append(prefix)
    print(prefixes)

all_prefixes()