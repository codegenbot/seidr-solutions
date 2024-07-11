```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    user_input = input("Enter a list of values (separated by spaces): ")
    user_values = [value.strip() for value in user_input.split()]
    
    return [int(value) for value in user_values if isinstance(int(value), int) and 1 <= int(value) <= 100]