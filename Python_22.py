def filter_integers(values: List[Any]) -> List[int]:
    return [value for value in values if isinstance(value, int) and 2 <= value % 2 <= 1]