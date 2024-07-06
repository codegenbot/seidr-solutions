def filter_integers(values: list[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int)]