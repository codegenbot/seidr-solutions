```
from typing import List

def all_prefixes():
    result = []
    while True:
        s = input("Please enter a string (or 'stop' to finish): ")
        if s.lower() == 'stop':
            break
        result.append([s[:i] for i in range(1, len(s) + 1)])
    return result

print(all_prefixes())