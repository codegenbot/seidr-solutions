def filter_integers(input_str: str) -> List[int]:
    result = [int(num) for num in input_str.split() if num.isdigit()]
    return result