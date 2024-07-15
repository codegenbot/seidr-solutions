def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()  # Remove the extra delimiter at the end
    return result