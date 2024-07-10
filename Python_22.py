from typing import List, Any

def filter_integers(values: list[Any]) -> list[int]: 
    return [v for v in values if isinstance(v, int)]