from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=lambda x: (len(x), x))

input_strings = []
while True:
    try:
        input_strings.append(input())
    except EOFError:
        break

result = longest(input_strings)
print(result)