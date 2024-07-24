def filter_integers(values: List[Any]) -> str:
    integers = [value for value in values if isinstance(value, int)]
    if len(integers) == len(values):
        return str(integers)
    else:
        return "Not all inputs were valid integers."