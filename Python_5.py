def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if not numbers:
        return []
    if delimiter is None:
        return [num for num in numbers]
    if not isinstance(delimiter, int):
        raise ValueError("Delimiter must be an integer or None")
    result = [numbers[0]]
    for num in numbers[1:]:
        result.extend([delimiter, num])
    return result