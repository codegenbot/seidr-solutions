```
def filter_integers(values: List[Any]) -> List[int]:
    return [int(value) for value in values if isinstance(value, int)]