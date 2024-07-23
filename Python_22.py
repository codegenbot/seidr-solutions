```
from typing import List, Any

def filter_integers() -> List[int]:
    user_input = input("Enter a list of values (space-separated): ")
    values = [value.strip() for value in user_input.split()]
    return [int(value) for value in values if isinstance(int(value), int)]