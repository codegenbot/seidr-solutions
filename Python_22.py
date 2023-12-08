def filter_integers(values: list[Any]) -> List[int]:
    return [x for x in values if isinstance(x, int)]