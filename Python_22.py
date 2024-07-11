from typing import List, Any


def filter_integers(values: List[Any]) -> list:
    try:
        return [value for value in values if isinstance(value, int)]
    except Exception as e:
        print(f"An error occurred: {e}")
        return []