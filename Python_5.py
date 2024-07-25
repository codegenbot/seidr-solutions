def intersperse(numbers: List[int], delimeter: int) -> List[int]:
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    if result:
        result.pop()  # Remove the extra delimiter at the end
    return result