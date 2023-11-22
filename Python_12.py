from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

input_list = ['string1', 'string2', 'string3']
result = longest(input_list)
print(result)