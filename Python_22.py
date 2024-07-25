```
from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    try:
        filtered_values = [value for value in values if isinstance(value, int)]
        return filtered_values if len(filtered_values) > 0 else None
    except Exception as e:
        print(f"An error occurred: {e}")
        return None