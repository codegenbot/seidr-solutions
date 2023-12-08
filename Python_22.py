def filter_integers(values: list) -> list[int]:
    return list(filter(lambda x: isinstance(x, int), values))