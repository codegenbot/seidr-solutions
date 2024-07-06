def filter_integers(values: List[Any]) -> List[int]:
    return list(filter(lambda x: isinstance(x, int), values))