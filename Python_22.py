```
def filter_integers() -> List[int]:
    result = get_values()
    return [value for value in result if isinstance(value, int)]