def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for n in numbers:
        result.extend([n, delimeter])
    result.pop()  # Remove the extra delimiter at the end
    return result