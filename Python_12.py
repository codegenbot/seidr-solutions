```
from typing import Optional

def longest(strings: str) -> Optional[str]:
    if not strings:
        return None
    return max(strings.split(), key=len)

strings = []
while True:
    user_input = input("Enter a string (or 'stop' to finish): ")
    if user_input.lower() == 'stop':
        break
    strings += user_input

result = longest(' '.join(strings))
print(result)