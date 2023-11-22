from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

input_str = input("Enter comma-separated strings: ")
input_list = input_str.split(",") if input_str else []
result = longest(input_list)
print(result)