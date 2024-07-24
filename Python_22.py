def filter_integers(input_dict: dict) -> List[int]:
    return [value for value in input_dict.values() if isinstance(value, int)]