```
def filter_integers(values: List[Any]) -> List[Any]:
    if not isinstance(values, list):
        return [values] if isinstance(values, int) else []
    result = []
    for value in values:
        if isinstance(value, list):
            result.extend(filter_integers(value))
        elif isinstance(value, int):
            result.append(value)
    return result