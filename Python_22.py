from typing import List, Any

def filter_integers(values: List[Any]) -> List[int]:
    return [int(str(value)) if not isinstance(value, int) else value for value in values]