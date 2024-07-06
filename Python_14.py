```
from typing import List

def all_prefixes(string: str) -> List[str]:
    return [""] + [string[:i] for i in range(1, len(string) + 1)]

while True:
    try:
        user_string = input()
        print(all_prefixes(user_string))
        break
    except Exception as e:
        print(f"Invalid input. Please enter a valid string: {e}")