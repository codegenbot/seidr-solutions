```
from typing import list

def remove_duplicates(numbers: list) -> list:
    seen = set()
    result = []
    for num in numbers:
        try:
            if num not in seen:
                seen.add(num)
                result.append(num)
        except Exception as e:
            print(f"An error occurred: {e}")
    return result