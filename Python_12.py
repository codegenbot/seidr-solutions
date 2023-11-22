from typing import List, Optional

def longest(strings: List[str]) -> Optional[str]:
    if not strings:
        return None
    return max(strings, key=len)

input_data = input().strip().split(",")  # Modify the split function to use the expected delimiter
result = longest(input_data)

if result is None:
    print("No strings provided")
else:
    print(result)