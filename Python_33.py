def sort_third(l: list):
    result = sorted([val for idx, val in enumerate(l) if idx % 3 == 0])
    return [val if idx % 3 != 0 else result.pop(0) for idx, val in enumerate(l)]