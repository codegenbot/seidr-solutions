def join_with_delimiter(numbers: List[str], delimiter: str) -> List[str]:
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result