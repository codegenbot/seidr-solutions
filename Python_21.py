def rescale_to_unit(numbers: List[List[float]]) -> List[List[float]]:
    result = []
    for lst in numbers:
        min_value = min(lst)
        max_value = max(lst)
        result.append([(x - min_value) / (max_value - min_value) for x in lst])
    return result