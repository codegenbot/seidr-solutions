def filter_integers(values: List[Any]) -> List[int]:
    return [v for v in values if isinstance(v, int)]